#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
//�½�ͨѶ¼
//��ϵ�˹���ϵͳ
//1.������ϵ��: ����,�绰,��˾,��ַ
//2.��ô����.
//3.��ô����ɾ��()

typedef struct personinfo {
	char name[1024];
	char phone[1024];
	char company[1024];
	char address[1024];
} personinfo;

#define PERSON_INFOS_MAX_SIZE 200

typedef struct addressbook{
	//[0.size) ��ʾ��Ч����ϵ����Ϣ
	personinfo person_infos[PERSON_INFOS_MAX_SIZE];
	int size;
} addressbook;

addressbook g_addr_book;

int menu(){
	printf("========================\n");
	printf("1 . �½���ϵ��\n");
	printf("2 . ɾ����ϵ��\n");
	printf("3 . �޸���ϵ��\n");
	printf("4 . ������ϵ��\n");
	printf("5 . ����\n");
	printf("6 . ��ӡȫ����ϵ��\n");  
	printf("7 . ���ȫ����ϵ��\n");
	printf("0 . �˳�\n");
	printf("========================\n");
	int choice;
	scanf("%d", &choice);
	return choice;
}

void Init(addressbook* addr_book) {
	assert(addr_book != NULL);//��ָ������пղ���
	//addr_book->size = 0;
	//int max_size = sizeof(addr_book->person_infos) / sizeof(addr_book->person_infos[0]);���ͼ���ṹ�峤�ȷ�ʽ
	//for (int i = 0; i < max_size; i++){
	//	memset(addr_book->person_infos[i].name, 0, 1024);
	//	memset(addr_book->person_infos[i].phone, 0, 1024);
	//	memset(addr_book->person_infos[i].company, 0, 1024);
	//	memset(addr_book->person_infos[i].address, 0, 1024);
	//}
	memset(addr_book, 0, sizeof(addressbook));
	//�ṹ���ʼ��
}

void addpersoninfo(addressbook* addr_book){
	printf("������ϵ��\n");
	if (addr_book-> size >= PERSON_INFOS_MAX_SIZE){
		printf("���ʧ��!�洢����!");
	}

	personinfo* p = &addr_book->person_infos[addr_book->size];
	
	printf("�������û���: ");
	scanf("%s",p -> name);
    //��ʱ������������±�Ϊsize��Ԫ���Ϸ���
	//scanf("%s", addr_book->person_infos[addr_book->size].name);
	printf("��������ϵ�˵绰: ");
	scanf("%s", p->phone);

	printf("��������ϵ�˹�˾: ");
	scanf("%s", p->company);
	
	printf("��������ϵ�˵�ַ");
	scanf("%s", p->address);

	++addr_book->size;
	printf("��ӳɹ�\n");
}

void delpersoninfo(addressbook* addr_book){

}

void modifypersoninfo(addressbook* addr_book){

}

void findpersoninfo(addressbook* addr_book){

}

void sortpersoninfo(addressbook* addr_book){

}

void printfallpersoninfo(addressbook* addr_book){

}

void clearpersoninfo(addressbook* addr_book){

}
int main(){
	//������    ����ָ������
	typedef void(*pfunc_t)(addressbook*);
	pfunc_t func_table[ ] = {
		addpersoninfo,
		delpersoninfo,
		modifypersoninfo,
		findpersoninfo,
		sortpersoninfo,
		printfallpersoninfo,
		clearpersoninfo,
	};
 
	//�������Ԫ�ؽ��г�ʼ��
	Init (&g_addr_book);
	while (1){
		int choice = menu( );
		if (choice < 0 || choice > sizeof(func_table) / sizeof (func_table[0])); {
			printf("��������Ƿ�! ����������!\n");
			continue;
		}
		if (choice == 7){
			break;
		}
		func_table[choice - 1](&g_addr_book);
	}


	system("pause");
	return 0;
}