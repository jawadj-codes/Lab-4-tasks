#include<stdio.h>

//Take two numbers as input and check if they are equal or which one is greater.

int main(){
	int num1,num2;
	
	printf("Enter Number 1: ");
	scanf("%d",&num1);
	
	printf("Enter Number 2: ");
	scanf("%d",&num2);
	
	if (num1 == num2)
	{
		printf("Both Numbers are equal");
	}
	else if (num1 > num2)
	{
		printf("Number 1 is grater than Number 2");	
	}
	else
	{
		printf("Number 2 is grater than Number 1");		
	}
}
