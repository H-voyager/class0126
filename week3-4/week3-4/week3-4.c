#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/////////////////////////////////////////////////////
��ӡˮ�ɻ���0-1000
int IsArm(int x){
	int one = 0;
	int ten = 0;
	int hun = 0;
	int a = x / 10;
	int b = a / 10;
	one = x % 10;
	ten = a % 10;
	hun = b % 10;
	if (x == pow(one , 3) + pow (ten , 3) +pow(hun , 3) )
	{
		return 1;
	}
	return 0;
}

int main( ){
	int i;
	for (i = 100; i < 1000; i++)
	{
		if (IsArm( i ) == 1)
		{
			printf_s("%d\n", i);
		}
	}//////////////////////////////////////////////////////////////
��ӡͼ��
int main( ){
	int maxline = 0;
	int i;
	scanf_s("%d", &maxline);
	for ( i = 1; i < maxline; i++)
	{
		int  j = 1;
		for ( j = 0;  j < ( maxline - i );  j++)
		{
			printf_s(" ");
		}
		for (j = 0; j < (2 * i -1); j++)
		{
			printf_s("*");
		}
		printf_s("\n");
	}
	for ( i = 1; i < maxline; i++)
	{
		int j;
		for (j = 1; j <= i ; j++)
		{
			printf_s(" ");
		}
		for (j = 0; j < (2 * (maxline - i) - 1); j++)
		{
			printf_s("*");
		}
		printf_s("\n");
	}
	//////////////////////////////////////////
	��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ������
	int num = 0, n = 0;
	int sum = 0;
	int i;
	int temp = 0;
	scanf_s("%d %d", &num ,&n);
	for (i = 1; i <= n; i++)
	{
		temp = temp * 10 + num;
		sum = sum + temp;
	}
	printf_s("%d\n", sum);
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int menu( int input){
	printf("====================\n");
	printf("==��Ϸ��ʼ  1 ");
	printf("==�˳���Ϸ  0 ");
	printf("====================\n");
	if (input == 1){
		return 1;
	}
	else if (input == 0) {
		return 0;
	}
	printf("����Ƿ�");
}

int Game(
	){


}
ʵ��һ��������ӡ�˷��ھ�
void printmulit(int n)
{
	for (int row= 1;  row <= n;  row++)
	{
		for (int col = 1; col <= row; col++)
		{
			printf("%d * %d = %d ", col, row, col *row);
		}
		printf("\n");
	}
}

int main() {
	int i;
	scanf("%d", &i);
	printmulit( i );

	system("pause");
	return 0;
}

//ʵ������ĳ�ʼ������պ�
void Init()
{


}
void reverse(int* arr, int size)
{

}

















q2222222222222222222222222222222222222222223