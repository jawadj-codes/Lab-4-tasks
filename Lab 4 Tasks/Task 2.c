#include<stdio.h>

//Take a number as input and check if it is divisible by both 3 and 5.

int main(){
	int num;
	
	printf("Enter the number: ");
	scanf("%d",&num);
	
	if (num % 3 == 0 && num % 5 == 0)
	{
		printf(" The number is divisible by both 3 and 5");
	}
	else
	{
		printf(" The number is not divisible by both 3 and 5");
	}
}

