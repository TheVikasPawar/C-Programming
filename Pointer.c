#include<stdio.h>

void main()
{
	int a=10; //Variable Declare
	int *b=&a;
	
	printf("a-%d\n",a);
	printf("%d\n",&a);
	printf("%d\n",b);
	printf("%d\n",*b);
}
