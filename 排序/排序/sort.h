#pragma once

#include <stdio.h>
#include <stdlib.h>

//for (int  i = 1; i < size; i = i *2) ѭ��log(n)��,�����������

void PrintArray(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d", array[i]);
	}
	printf("\n");
}

void Swap(int array[], int i, int j)
{
	int t = array[i];
	array[i] = array[j];
	array[j] = t;
}

/*
ʱ�临�Ӷ�:
	���	O(n)	    ����
	ƽ��	O(n^2)
	�	O(n^2)  ����
�ռ临�Ӷ�:
	O(1)
�ȶ���: �ȶ�
*/

//��������
void InsertSort(int array[], int size)
//һ�δ���һ����,������Ҫѭ��size��
//�ϸ�������, size - 1�ξ͹���
//����[0.i - 1]
//Ҫ����[i]
//����[i + 1,size - 1]
{
	for (int i = 0; i < size; i++)				
	{
		int j;
		for ( j = i - 1; j >= 0 && array[j] > array[i]; j--){}

		//�� array[i] ���ȥ
		if (j + 1 != i)
		{//������array[i]���뵽[0,i - 1]��˳�����
		//������±���j
			int key = array[i];
			for (int k = i; k > j +1; k--)
			{
				array[k] = array[k - 1];
			}
			 
			array[j + 1] = key;
		}
	}
}

void InterSortWithGap(int array[], int size,int gap)
{
	//ShellSort�ж���gap
	for (int i = 0; i < size; i++)
	{
		int key = array[i];
		int j;
		for (j = i - gap; j >= 0 && array[j] > key; j -=gap)
		{
			array[j + gap] = array[j];
		}
		array[j + gap] = key;
	}
}

void InsertSort2(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int key = array[i];
		int j;
		for (j = i - 1; j >= 0 && array[j] > key; j--)
		{
			array[j + 1] = array[j];
		}

		array[j + 1] = key;
	}
}


void BubberSort(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		//int isSorted = 1;
		for (int  j = 0; j < size - 1 -i; j++)
		{
			if (array[j] >array[j + 1])
			{
				Swap( array,j, j + 1);
				//isSorted = 0;
			}
		}

		//if (isSorted == 1)
		//{
		//	break;
		//}
	}
}

void ShellSort(int array[], int size)
{
	int gap = size;
	while (1)
	{
		gap = gap / 3 + 1;

		InterSortWithGap(array, size, gap);
		if (gap == 1)
		{
			break;
		}
	}
}
//void sum()
//{
//	int sum = 0;
//	int i = 0;
//	scanf_s("%d", &i);
//	for (int j = 0; j <=i; j++)
//	{
//		sum = sum + j;
//	}
//	printf_s("%d", sum);
//}


/*ѡ������
1.ֱ������
ʱ�临�Ӷ�: ���ݲ����� O(n^2)
�ռ临�Ӷ� : O(1)
�ȶ���: ���ȶ�
*/


void SelectSort(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		//��������: [size - i,size - 1]
		//����ռ�: [0,size - 1 - i]
		int maxIndex = 0;
		//��¼��������±�
		for (int j = 0; j < size -1 - i; j++)
		{
			//�ҵ�����������������ֵ���±�
			if (array[j] >array[maxIndex])
			{
				maxIndex = j;
			}
			//maxIndex����������Ķ����һ��λ�ý��н���
			Swap(array, maxIndex, size - 1 - i);
		}
	}
}

//2.������
//ʱ�临�Ӷ� O(n * log(n))
//�ռ临�Ӷ�O(1)
//�ȶ���: ���ȶ�
void Heapify(int array[], int size, int index)
{
	/*
	1.�ж��ǲ���Ҷ��
	2.�ҵ����ĺ���
		1)û���Һ���
		2)�Һ���
			1)���Ӵ�
			2)�Һ��Ӵ�
	3.���ĺ��Ӻ͸��Ƚ�,������Ƚϴ�,�˳�
	4.�������Ҽ�������
	*/
	int left = 2 * index + 1;
	int right = 2 * index + 2;
	if (left >= size)
	{
		return;
	}
	int max = left;
	if (right < size && array[right] > array[left])
	{
		max = right;
	}
	if (array[max] <= array[index])
	{
		return;
	}
	Swap(array, max, index);

	Heapify(array, size, max);
}

void CreateHeap(int array[], int size)
{
	for (int i = (size - 2) / 2; i >=0 ; i--)
	{
		Heapify(array, size, i);
	}
}

void HeapSort(int array[], int size)
{
	CreateHeap(array, size);

	for (int i = 0; i < size; i++)
	{
		Swap(array, 0, size - 1 - i);
		Heapify(array, size - 1 - i, 0);
	}
}



void Test()
{
	int array[] = {9,8,7,6,5,4,3,3,1};
	int  size = sizeof(array) / sizeof(int);

	PrintArray(array, size);
	//sertSort(array, size);
	//BubberSort(array, size);
	//InterSortWithGap(array, size, 8);
	//InsertSort2(array, size);
	//ShellSort(array, size);
	//SelectSort(array, size);
	HeapSort(array, size);
	PrintArray(array, size);
	system("pause");
}