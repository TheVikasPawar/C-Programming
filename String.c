#include<stdio.h>

void main()
{
	char str[50],str2[50];
	puts("Enter Name: ");
	gets(str);
	puts("Enter Name: ");
	gets(str2);
	if(strcmp(str2,str)==0){
		puts("Both are Equal.");
	}else{
		puts("Both are not equal.");
	}
	
	
}
