#include<stdio.h>
#define increment()	(salary[i]/100*10)
int i;
int salary[]={10000,20000};
void main()
{
	for(i=0;i<=1;i++){
	int total=salary[i]+increment();
	printf("%d\n",total);
	}
}
