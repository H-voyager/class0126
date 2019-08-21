#pragma once

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int value;
	struct Node* Left;
	struct Node* Right;
}Node;

// ����		Node *root = NULL;
// ֻ��һ�����		Node *root;		root != NULL && root->left == NULL && root->right == NULL

// Node *node;		����ֻ������һ����㣬����ʱ�������� node Ϊ����������

// �ݹ�
// 1. ���ƹ�ʽ
// 2. ��ֹ����
//ǰ�����
void PreorderTraversal(Node *root)
{
	if (root == NULL)
	{
		return;
	}
	//��
	printf("%d", root->value);
	//������
	PreorderTraversal(root->Left);
	//������
	PreorderTraversal(root->Right);
	//���� , ����ֻ��ı��Ⱥ�˳��
}

void InorderTraversal(Node *root)
{
	if (root == NULL)
	{
		return;
	}
	//������
	InorderTraversal(root->Left);
	//��
	printf("%d", root->value);
	//������
	InorderTraversal(root->Right);
	//���� , ����ֻ��ı��Ⱥ�˳��
}


void PostorderTraversal(Node *root)
{
	if (root == NULL)
	{
		return;
	}
	//������
	PostorderTraversal(root->Left);
	//������
	PostorderTraversal(root->Right);
	//���� , ����ֻ��ı��Ⱥ�˳��
	//��
	printf("%d", root->value);
}


//����ڵ�
Node* CreateNode(int value)
{
	Node* node = (Node*)malloc(sizeof (Node));
	node->value = value;
	node->Left = node->Right = NULL;
	return node;
}

int count = 0;
void Getsize(Node* root)
{
	if (root == NULL)
	{
		return;
	}
	count++;//��
	Getsize(root->Left);//������
	Getsize(root->Right);
} 

//��������Ľڵ���
int GetSize(Node* root)
{
	if (root == NULL)
	{
		return 0;
	}
	return GetSize(root->Left) + GetSize(root->Right) + 1;
}

//����һ����
void Test()
{
	Node*a = CreateNode(1);
	Node*b = CreateNode(2);
	Node*c = CreateNode(3);
	Node*d = CreateNode(4);
	Node*e = CreateNode(5);
	Node*f = CreateNode(6);
	Node*g = CreateNode(7);
	Node*h = CreateNode(8);

	a->Left = b; a->Right = c;
	b->Left = d; b->Right = e;
	c->Left = f; c->Right = g;
	d->Left = NULL; d->Right = NULL;
	e->Left = NULL; e->Right = h;
	f->Left = NULL; f->Right = NULL;
	g->Left = NULL; g->Right = NULL;
	h->Left = NULL; h->Right = NULL;

	for (int i = 0; i < 8; i++)
	{
		printf("%d: %c\n", i + 1, 'A' + i);
	}

	printf("ǰ�����:\n");
	PreorderTraversal(a);
	printf("�������:\n");
	printf("�������:\n");
    PostorderTraversal(a);
}