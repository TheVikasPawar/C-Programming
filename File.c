#include<stdio.h>

void main(){
	int num;
	FILE *fp;
	fp=fopen("D:\\java.txt","w");
	
	
	if(fp==NULL){
		printf("File Doesnt Exit.");
		exit(1);
	}
	printf("File Create Successfully.\n");
	
	printf("Enter a Para:");
	scanf("%d",&num);
	printf("Data Wrote.");
	
	fprintf(fp,"%d",num);
}
