#include<stdio.h>

int main()
{
	static int a =10;	//Local Variable
	
	if(1==1){
		static int b=20;
		printf("%d",a);
		printf("%d",b);
	}
	printf("%d",a);
	//printf("%d",b);
}
