//#define _crt_secure_no_warnings
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(){
//	int num1 = 0;
//	int num2 = 0;
//	printf("����������������");
//	scanf("%d %d", &num1, &num2);
//	int num = num1 + num2;
//	printf("sum = %d\n", num);
//	//���� 1.����ֵ����2.const �ؼ������εĳ���const float pi = 3.14;
//	//3.#define(��) ����ĳ��� 4.ö�ٳ���enum
//	////enum{
//	//	male,female,unknow,
//	//}; (0.1.2)

//���������������� �ֲ������������ڴ������ڣ�ȫ�ֱ���������������
//c�����еı�������������;ȫ�ֱ����������еĺ����ⲿ���壩���ֲ�����
//c���Զ������
//������ ������=��ʼֵ
//�����������Ҫ�Ա������г�ʼ��
//int age = 18;
//char name = 'a';
//long ccore;
//����ע��ctrl+k+c
//printf�ܰ���һ���ĺ��ʴ�ӡ�ַ�
//sizeof���ܲ鿴ĳ��������������ռ�õ��ֽڣ�byte����
// c������û���ַ������ͣ�ͨ���ַ�����ķ�ʽ����ʾ�ַ���
//printf("%d\n", sizeof(char));//1
//printf("%d\n", sizeof(short));//2
//printf("%d\n", sizeof(int));//4
//printf("%d\n", sizeof(long));//4
//printf("%d\n", sizeof(long long));//8
//printf("%d\n", sizeof(float)); //4
//printf("%d\n", sizeof(double));//8
//	system("pause");//��ͬ�Ĳ���ϵͳ�¿��ܻᷢ���仯
//	return 0;
//}
//�ڶ���
//#define _crt_secure_no_warnings
//#include <stdio.h>
//#include <string.h>
//int add(int x, int y){
//	printf("x = %d\n", x);
//	printf("y = %d\n", y);
//	return x + y;
//}
//int main(){
//	int num1 = 0;
//	int num2 = 0;
//	printf("��������������:");
//	scanf("%d %d", &num1, num2);
//	int sum = add(num1, num2);
//	printf("sum = %d\n", sum);
//
	//\t:��ʾ�Ʊ��
	//printf("c:\code\test.c");
	//printf("%d\n", strlen("c:\test\32\test.c"));//\32Ϊasciiֵ
	//int choice = 0;
	//printf("���������ѡ��: 0 ��ú�ѧϰ 1 �һ�û�湻");
	//scanf("%d", &choice);
	//if (choice == 0){
	//	printf("ok\n");
	//}else 
	//{
	//	printf("huijia!\n");
//	//}
//	system("pause");
//	return 0	;
//}
//������
//#include <stdio.h>
//#include <stdlib.h>
//enum Sex{
//male,
//female,
//unkonw
//     };
////����C�������൱���ı��滻
////#define MAX 100
////#define ADD(x,y) x + y
//struct Student{
//	char name[1024];
//	int age;
//	char id[1024];
//	enum  Sex sex;
//};
//
//int main(){
//	struct Student zhangsan = { "����", 18, "1024", };
//	printf("%s,%s\n", zhangsan.name);
//���������� extern �������̱���������(���ļ�)Ҳ����Ϊ�����Ŀ��ļ�������
//void Test(){
//	static int num = 0;//ststic 1.���ξֲ�������ʱ��,�����ñ�����Ϊȫ������
//	//(������������)�����ı�������  2.������ȫ�ֱ���/(����+)ʱ��ȫ�ֱ���/(����)������������ڵ�ǰ.c�ļ�
//	num += 1;
//	printf("%d\n", num);
//}
//typedef long int32_t;�ض���
//
//	int main(){
//		long a = 10;
//		int32_t a = 10;
//		int count = 0;
//		while (count < 10){
//			Test();
//			count += 1;
//		}
//system("pause");
//return 0;
//}
//////////////////////////////////////

//int IsPrime(int x){
//	int num = 2;
//	while (num < x){
//		if (x % num == 0){
//			return 0;//˵����������
//		}
//		num = num + 1;
//	}
//	return 1;
//
//}
//
//int main(){
//	int i = 1;
	//while (i < 100)
//	{
//		if (IsPrime(i) == 1){
//			printf("%d\n", i);
//		}
//		i += 1;
//	}
//	system("pause");
//	return 0;
//}
//�����Сд��ĸ��Ӧ����෴����ĸ
#include <stdio.h>
#include <stdlib.h>
int main(){
	int ch = 0;
	while ((ch == getchar( ) != EOF){
		if (ch >= 'A' && ch <= 'Z'){
			putchar (ch + 32);
		}
		else if
	}

	system("pause");
	return  0;
}

