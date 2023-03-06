#include<stdio.h>

union student {
	char name[20];
	int roll;
	double marks;
};

void main() {
	union student s;
	printf("Enter name:");
	scanf("%s",&s.name);
	
	
	printf("Enter roll number:");
	scanf("%d",&s.roll);
	
	
	printf("Enter marks:");
	scanf("%lf",&s.marks);
	printf("%lf",s.marks);
	printf("%s",s.name);
	printf("%d",s.roll);
}
