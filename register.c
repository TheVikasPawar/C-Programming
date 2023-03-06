#include<stdio.h>

int fun()
{
	register int a=10;
	printf("%d",a);
}
void main()
{
	fun();
}
