#include<stdio.h>

struct student {
	char name[20];
	int roll;
	double marks;
};

void main() {
	struct student s;
	printf("Enter name,roll number,marks:");
	scanf("%s%d%lf",&s.name,&s.roll,&s.marks);

	printf("%s%d%lf",s.name,s.roll,s.marks);
}
