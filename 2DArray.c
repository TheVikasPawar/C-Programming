#include<stdio.h>

void main()
{
	int a[2][2];
	
	int i,j;
	
	for(i=0;i<2;i++){	//rows
		for(j=0;j<2;j++){	//columns
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
}
