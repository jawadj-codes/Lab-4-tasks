#include<stdio.h>

//Take three numbers as input and find the smallest among them using nested if-else statements.

int main(){
	int num1,num2,num3;
	
	printf("Enter Number 1: ");
	scanf("%d",&num1);
	
	printf("Enter Number 2: ");
	scanf("%d",&num2);
	
	printf("Enter Number 3: ");
	scanf("%d",&num3);
	
	if (num1 > num2)
	{
		if (num2 > num3)
		{
			printf("The smallest number is: %d",num3);
		}
		else
		{
			printf("The smallest number is: %d",num2);	
		}
	}
	else
	{
		printf("The smallest number is: %d",num1);
	}
}

	
