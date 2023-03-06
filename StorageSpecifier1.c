#include<stdio.h>

extern int c=100;

void storage(){
	auto int a=10;
	int b=34;
	
	printf("%d ",a);
	printf("%d\n",b);
	++a;
	++b;
}

void main()
{
	storage();
	storage();
	storage();
}
