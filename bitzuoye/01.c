////��ӡ100-200֮�������
#include <stdio.h>
#include <stdlib.h>
int is(int x){
	int num = 2;
	while (num < x){
		if (x % num == 0){
			return 0;//˵����������
		}
		num = num + 1;
	}
	return 1;

}

int main(){
	int i = 100;
	while (i < 201){
		if (is(i) == 1){
			printf("%d\n", i);
		}
		i += 1;
	}
	system("pause");
	return 0;
}
////��ӡ�˷���
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{-00
//	int i = 1, j = 1, sum = 0;
//	for ( i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d * %d = %d ",i ,j ,sum = i * j);
//		}
//		printf("\n");
//	}

//�ж�1000-2000֮�������

//	int year = 1000;
//	for ( year = 1000;year < 2001;year ++ )
//	{
//		if (year % 4 == 0 && year % 100 != 0 )
//		{
//			printf("%d\n", year);
//		}
//		else
//		{
//			if (year % 400 == 0)
//			{
//				printf("%d\n", year)
//			}
//		}

	//����1-1/2......��ֵ
	//int i = 0;
	//double sum1 = 0;
	//double sum2 = 0;
	//for ( i = 1; i < 100; i+= 2)
	//{
	//	sum1 = sum1 + 1.0 / i;
	//}
	//for ( i = 2; i < 101; i+= 2)
	//{
	//	sum2 = sum2 + 1.0 / i;
	//}
	//printf_s("%f\n", sum1 - sum2);
	//3. ��д������һ�� 1�� 100 �����������г��ֶ��ٴ�����9
	/*int num = 0;
	int i = 0;
	for (i = 1; i < 100; i ++)
	{
		if ( i % 10 == 9  )
		{
			num++;
		}
		if (i / 10 == 9)
		{
			num++;
		}
	}
	printf_s("%d\n", num);*/
//����������������
	//int arr1[ 10 ], arr2[ 10 ] , num[10];
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	scanf_s("%d", &arr1[i]);
	//}
	//for (i = 0; i < 10; i++)
	//{
	//	scanf_s ("%d", &arr2[i]);
	//} 
	//for ( i = 0; i < 10; i++)
	//{
	//	printf_s("%d\n", arr1[i]);
	//}
	//for (i = 0; i < 10; i++)
	//{
	//	printf_s("%d\n", arr2[i]);
	//}

	//for ( i = 0; i < 10; i++)
	//{
	//	num[ i ] = arr1[ i ];
	//	arr1[ i ] = arr2[ i ];
	//	arr1[ i ] = num[ i ];
	//}
	//for (i = 0; i < 10; i++)
	//{
	//	printf_s("%d\n", arr1[i]);
	//}
	//for (i = 0; i < 10; i++)
	//{
	//	printf_s("%d\n", arr2[i]);
	//}
	//������������
	//	//int num1, num2, num;
	//	//scanf_s("%d %d", &num1, &num2);
	//	//num  = num1;
	//	//num1 = num2;
	//	//num2 = num;
	//	//printf("%d %d", num1, num2);
	//
	//	int a, b;
	//	scanf_s("%d %d", &a, &b);
	//	//a = a + b;
	//	//b = a - b;
	//	//a = a - b;
	//	a = a ^ b;
	//	b = a ^ b;
	//	a = a ^ b;
	//	printf("%d %d", a, b);
	//����������
	//int arr[10] = {1 ,2 ,3, 4 ,5, 6 ,7 ,8 ,9};
	//int i = 0;
	//int num = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	if (arr[i] > num )
	//	{
	//		num = arr[i];

	//	}
	//	
	//}
	//printf("%d", num);
	//��������С�������
	//
	//int a , b , c;
	//scanf_s ("%d %d %d", &a, &b, &c);
	//if (a > b)
	//{
	//	int i = 0;
	//	i = a;
	//	a = b;
	//	b = i;
	//}
	//if (a > c)
	//{
	//	a = a + c;
	//	c = a - c;
	//	a = a - c;
	//}
	//if (b > c)
	//{
	//	b = b + c;
	//	c = b - c;
	//	b = b - c;
	//}	
	//printf("%d %d %d", a, b, c);
	//�������������Լ��
	//int a , b;
	//scanf_s ("%d %d",&a , &b);
	//int i , n;
	//n = b;
	//if (a < b)
	//{
	//	n = a;
	//}
	//
	//for (i = n; i > 0; i--)
	//{
	//	if (a % i == 0 && b % i == 0)
	//	{
	//		printf_s("%d", i);
	//		break;
	//	}
	//}
    system("pause");
	return 0;
}