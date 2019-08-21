#pragma once
#include <iostream>
#include <assert.h>

using namespace std;

#define N 100
typedef int SLDataType;

// ˳���Ķ�̬�洢
class SeqList
{
public:
	//SeqList(SeqList *psl, size_t capacity)
	//{
	//	assert(psl != nullptr);
	//	if (psl != nullptr);

	//	psl->_array = new int[capacity];
	//	assert(psl->_array != nullptr);
	//	psl->_size = 0;
	//	psl->_capicity = capacity;
	//}
	~SeqList()
	{
		//�ͷ�array�ռ�
		delete[] _array;

		_array = NULL;
		_size = 0;
		_capicity = 0;
	}
	// ������ɾ��Ľӿ�
	 //��ʼ��
	static void SeqListInit(SeqList *psl, size_t capacity)
	{
		assert(psl != nullptr);
		if (psl != nullptr);

		psl->_array = new int[capacity];
		assert(psl->_array != nullptr);
		psl->_size = 0;
		psl->_capicity = capacity;
	}
//	void SeqListDestory(SeqList* psl)
//	{
		//assert(psl != nullptr);
		//assert(psl->_array != nullptr);

		////�ͷ�array�ռ�
		//delete[] _array;

		//psl->_array = NULL;
		//psl->_size = 0;
		//psl->_capicity = 0;
//	}
	void CheckCapacity(SeqList* psl)
	{
		if (psl->_capicity > psl->_size)
		{
			return;
		}
		int newcapacity = psl->_capicity * 2;
		int *newarray = new int[newcapacity];

		for (int i = 0; i < psl->_size; i++)
		{
			newarray[i] = psl->_array[i];
		}

		delete[]_array;
		psl->_array = newarray;
		psl->_capicity = newcapacity;
	}

	//β�� O(1)
	void SeqListPushBack(SeqList* psl, SLDataType x)
	{
		CheckCapacity(psl);
		psl->_array[psl->_size] = x;
		psl->_size++;
	}
	//βɾ
	void SeqListPopBack(SeqList* psl)
	{
		assert(psl->_size > 0);
		psl->_array--;
	}
	
	//ͷ��
	void SeqListPushFront(SeqList* psl, SLDataType x)
	{
		CheckCapacity(psl);
		//i�ǿռ���±�
		for (int i = psl->_size; i >= 1; i--)
		{
			psl->_array[i] = psl->_array[i-1];
		}
		psl->_array[0] = x;
		psl->_size++;
	}
	
	//ͷɾ
	void SeqListPopFront(SeqList* psl)
	{
		assert(psl->_size > 0);
		for (int i = 0; i < psl->_size - 2; i++)
		{
			psl->_array[i] = psl->_array[i + 1];
		}
		psl->_size--;
	}

	//����
	int SeqListFind(SeqList* psl, SLDataType x)
	{
		for (int i = 0; i < psl->_size; i++)
		{
			if (psl->_array[i] == x)
			{
				return i;
			}
		}
		return -1;
	}

	//����
	void SeqListInsert(SeqList* psl, size_t pos, SLDataType x)
	{
		CheckCapacity(psl);
		if (pos >= 0 && pos < psl->_size)
		{
			for (int i = psl->_size - 1; i >= pos; i--)
			{
				psl->_array[i + 1] = psl->_array[i];
			}
			psl->_array[pos] = x;
			psl->_size++;
		}
	}

	//ɾ��pos
	void SeqListErase(SeqList* psl, size_t pos)
	{
		assert(pos >= 0 && pos < psl->_size);
		for (int i = pos; i > psl->_size; i++)
		{
			psl->_array[pos] = psl->_array[pos + 1];
		}
		psl->_size--;
	}

	//O(n)
	void SeqListRemove(SeqList* psl, SLDataType x)
	{
		int pos = SeqListFind(psl, x);
		if (pos == -1)
		{
			return;
		}
		SeqListErase(psl, pos);
	}

	//�޸�
	void SeqListModify(SeqList* psl, size_t pos, SLDataType x)
	{
		assert(pos >= 0 && pos < psl->_size);
		psl->_array[pos] = x;
	}

	//��ӡ
	void SeqListPrint(SeqList* psl)
	{
		for (int i = 0; i < psl->_size; i++)
		{
			cout << psl->_array[i] << endl;
		}
	}
	// ð������
	void SeqListBubbleSort(SeqList* psl);

private:
	SLDataType* _array; // ָ��̬���ٵ�����
	size_t _size; // ��Ч���ݸ���
	size_t _capicity; // �����ռ�Ĵ�С
};


void Test()
{
	SeqList seqList;
}