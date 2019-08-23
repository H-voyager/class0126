#include "seqlist.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

// ȷ���������ã�����Ҫ���ݣ�ʲô������
// ��Ҫ���ݾ�����
// Ӱ�캯�����������ԣ����ⲿ�������� -> �ڲ���������
// O(n)

static void CheckCapacity(Seqlist *ps)
{
	if (ps->size <ps->capacity)
	{
		return;
	}
	int NewCapacity = ps->capacity * 2;
	int *NewArray = (int *)malloc(sizeof(int)* NewCapacity);
	assert(NewArray != NULL);

	for (int i = 0; i <ps->size; i++)
	{
		NewArray[i]= ps->array[i];
	}

	//�ͷ�capacity ,��newcapacity
	free(ps->array);
	ps->array=NewArray;
	ps->capacity = NewCapacity;
}
void SeqlistInit(Seqlist *ps, int capacity)
{
	//ps: �����Ǳ����ĵ�ַ
	assert(ps != NULL);
	if (ps !=NULL)
	{
		ps->array = malloc(sizeof (int)* capacity);
		assert(ps->array != NULL);
			ps->size = 0;
			ps->capacity = capacity;
	}
}

void SeqlistDestory(Seqlist *ps)
{
	assert(ps != NULL);
	assert(ps->array != NULL);
	free(ps->array);

	//���пɲ���
	ps->capacity = 0;
	ps->size = 0;
	ps->array = NULL;
}

//��, ɾ,��, ��
//β��
void SeqlistPushback(Seqlist *ps,int v)
{
	CheckCapacity(ps);
	ps->array[ps->size] = v;
	ps->size++;
}

//ͷ��
void SeqlistPushFront(Seqlist *ps,int v,int pos)
{
	CheckCapacity(ps);
	assert(pos >= 0 && pos <= ps->size);
	// pos = 0 ����ͷ�壬pos = size ����β��

	for (int i = ps->size; i >0 ; i--)
	{
		ps->array[i] = ps->array[i + 1];
	}
	ps->array[0] = v;
	ps->size++;
}

//βɾ
void SeqlistPopback(Seqlist *ps)
{
	assert(ps->size > 0);
	ps->size--;
}

//ͷɾ
void SeqlistPopfront(Seqlist *ps)
{
	assert(ps->size > 0);

	for ( int i=0; i < ps->size - 2;  i++)
	{
		ps->array[i] = ps->array[i + 1];
	}

	ps->size--;
}

//����pos�±���ɾ��
void SeqlistErase(Seqlist *ps, int pos)
{
	//assert(ps->size > pos);
	//if (pos < ps->size)
	//{
	//	for (int i = pos; i < ps->size; i++)
	//	{
	//		ps->array[pos] = ps->array[pos = 1];
	//	}
	//	ps->size--;
	//}
	// [0, size - 1]
	assert(pos >= 0 && pos < ps->size);
	for (int i = pos + 1; i < ps->size; i++) {
		ps->array[i - 1] = ps->array[i];
	}

	ps->size--;

}

//����
int SeqlistFind(Seqlist *ps, int v)
{
	assert(ps->size > 0);
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->array[i] = v)
		{
			return i;
		}
	}
}

//����
int SeqlistModify(Seqlist *ps, int pos, int v)
{
	//�±�size-1
	assert(pos >= 0 && pos < ps->size);
	ps->array[pos] = v;

}

//ɾ��������һ��������v
void SeqlistRmove(Seqlist *ps, int v)
{
	assert(ps->size > 0);
	for (int i = 0; i < ps->size; i++)
	{
		if (ps->array[i] = v)
		{
			for (int pos = i; pos < ps->size; pos++)
			{
				ps->array[pos] = ps->array[pos + 1];
			}
		}
	}
	//int pos = SeqListFind(ps, v);
	//if (pos == -1) {
	//	return;
	//}

	//SeqListErase(ps, pos);
}

//ɾ������������v
void SeqlsitRemoveAll(Seqlist *ps, int v)
{
	int i, j;
	for (i = 0, j = 0; i < ps->size; i++)
	{
		if (ps->array[i] != v) 
		{
			ps->array[j] = ps->array[i];
			j++;
		}
	}

	ps->size = j;
}