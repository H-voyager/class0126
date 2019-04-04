#pragma once

/*
// ��̬˳���
// ˳�������������ھ�̬ʱ��ȷ���������ڼ䣬������д����
typedef struct SeqList {
int array[100];	// ������ 100
int size;		// ˳���ʵ�ʴ洢�����ݸ���
}	SeqList;
*/

// ��̬˳���
// �����ڶ�̬ʱ��ȷ��������ʱ�ڣ�
typedef struct Seqlist{
	int *array;
	int capacity; //����
	int size;//1.��Ч���ݵĸ���
	           //2.β��ʱ,����λ�õ��±�
}Seqlist;

//��ʼ��
void SeqlistInit(Seqlist *ps, int capacity);

//����
void SeqlistDestory(Seqlist *ps);

//��, ɾ,��, ��
//β��
void SeqlistPushback(Seqlist *ps);

//ͷ��
void SeqlistPushFront(Seqlist *ps);

//βɾ
void SeqlistPopback(Seqlist *ps);

//ͷɾ
void SeqlistPopfront(Seqlist *ps);

//����pos�±���ɾ��
void SeqlistErase(Seqlist *ps, int pos);

//����
int SeqlistFind(Seqlist *ps, int v);

//����
int SeqlistModify(Seqlist *ps, int pos, int v);

//ɾ��������һ��������v
void SeqlistRmove(Seqlist *ps, int v);

//ɾ������������v
void SeqlsitRemoveAll(Seqlist *ps, int v);