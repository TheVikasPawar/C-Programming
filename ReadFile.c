#include<stdio.h>

void main(){
	int num;
	FILE *fp;
	if((fp=fopen("D:\\java.txt","r"))==NULL){
		printf("Error Occured.");
		exit(1);
	}
	scanf(fp,"%d",&num);
	printf("%d",num);
	fclose(fp);
	return 0;
}
	
	
