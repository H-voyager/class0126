#define VALUE(x) ( (x)>0?(x):-(x) ) 
#include "sort.h"
#include <stdlib.h>
#include <stdio.h>


int main(){
	//Test();
	//sum()
	int putin;
	printf_s("������һ��������:\n");
	scanf_s("%d",&putin);
	Find(putin);
	//reverse(putin);
	printf_s("%d\n", putin);
	PrintArray(Find(putin), strlen(putin));
	

	system("pause");
}