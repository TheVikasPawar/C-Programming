#include<stdio.h>
int num1,num2,total;
char op;

int sum()
{
	total=num1+num2;
	printf("%d",total);
}

int sub()
{
	total=num1-num2;
	printf("%d",total);
}

int mul()
{
	total=num1*num2;
	printf("%d",total);
}

int div()
{
	total=num1/num2;
	printf("%d",total);
}

int choice(){
	printf("Enter Operator: ");
	scanf("%c",&op);

	printf("Enter Number: ");
	scanf("%d",&num1);

	printf("Enter Number: ");
	scanf("%d",&num2);
	
	switch(op){
		case '+':
			sum();
			break;
		case '-':
			sub();
			break;
		case '*':
			mul();
			break;
		case '/':
			div();
			break;
	}
}
void main()
{
	choice();
}
