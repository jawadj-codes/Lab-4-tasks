#include<stdio.h>
//Take two numbers and an operator (+, -, *, /) as input and use switch to perform the
//operation and print the result.

int main(){
	int num1;
	int num2,result;
	char oper;
	
	printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
	printf("Enter operator (+, -, *, /): ");
	scanf(" %c",&oper);
	
	switch(oper){
		case '+':
			result = num1 + num2;
			printf("The addition of numbers is: %d",result);
			break;
			
		case '-':
			result = num1 - num2;
			printf("The difference between numbers is: %d",result);
			break;
			
		case '*':
			result = num1 * num2;
			printf("The product of numbers is: %d",result);
			break;
		
		case '/':
			if (num2 != 0)
			{
				result = num1 / num2;
				printf("The division of numbers is: %d",result);		
			}
			else
			{
				printf("Cannot divide by zero");
			}
			break;
		
		default:
			printf("Invalid operator");
	}
}
	
