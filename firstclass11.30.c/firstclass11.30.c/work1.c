
#include <stdio.h>
#include <stdlib.h>
//����׳�
int Factor(int n)
{
	if ( n ==1)
	{
		return 1;
	}
	return  n * Factor(n - 1);
}


int main(){
//�����ַ�������
//int Strlen(char str [ ])
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	return 1 + Strlen(str + 1);
//}
//	char str[ ] = "hehe";
//	int len = Strlen(str);
//	printf("%d", len);



//���ú���num����1
//int addone(int* num){
//	*num = *num + 1;
//}
//int main( ){
//	int num = 0;
//	addone(&num);
//		printf("%d", num);
		system("pause");
		return 0;
	}
