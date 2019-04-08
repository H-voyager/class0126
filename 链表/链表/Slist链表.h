#pragma once
//C/C++��ע��ֻҪ��ͷ�ļ����ʼ����������ע�����ܹ���֤ͷ�ļ�ֻ������һ��

#include <stdlib.h>
#include <assert.h>

//����Ľڵ�
typedef struct Node
{
	int value;
	struct Node* next;
}Node;

//��ʼ���������һ��������,һ���ڵ㶼û��
void SListInit(Node ** ppFirst)
{
	*ppFirst = NULL;
}

//��������
void SListDestory(Node *first)
{
	Node *next;
	for (Node *cur = first; cur != NULL; cur = next)
	{
		next = cur->next;
		free (cur);
	}
}

//ͷ�� O(1)
void SListPushFront(Node **ppFirst, int v)
{
	Node *node = (Node *)malloc(sizeof(Node));
	node->value = v;

	node->next = *ppFirst;
	*ppFirst = node;
}

//ͷɾO(1)
void SListPopFront(Node **ppFirst)
{
	assert(*ppFirst != NULL);
	//*ppFirstָ���һ���ڵ�
	Node *next = (*ppFirst)->next;
	free(*ppFirst);
	*ppFirst = next;
}

//β��O(n)
void SListPushBack(Node** ppFirst, int v)
{
	if (*ppFirst == NULL)
	{
		Node* node = (Node*)malloc(sizeof(Node));
		node->value = v;

		node->next = *ppFirst;
		*ppFirst = node;
	}

	//�ҵ����һ���ڵ�,����������������һ���ڵ�\
	//current���ڵ�
	Node  *cur = *ppFirst;
	while (cur->next != NULL)
	{
		cur = cur->next;
	}

	//��ʱcur�����һ���ڵ�
	Node *node = (Node*)malloc(sizeof(Node));
	node->value = v;
	node->next = NULL;

	//��ԭ�������һ���ڵ�� next = �µĽڵ�;
	cur->next = node;
}



