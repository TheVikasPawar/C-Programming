#include<stdio.h>
void main()
{
	fun();
	fun();
	fun();
	fun();
}
void fun()
{
	int a=10;
	static int b=10;
	
	printf("%d ",a);
	printf("%d\n",b);
	a++;	b++;
}

