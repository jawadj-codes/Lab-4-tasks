#include<stdio.h>

//Take a number (1–7) as input and use switch to print the weekday name, with a default case for invalid input.

int main()
{
	int num;
	
	printf("Enter the number between 1 and 7: ");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1:
			printf("Sunday");
			break;
			
		case 2:
			printf("Monday");
			break;
		
		case 3:
			printf("Tuesday");
			break;
		
		case 4:
			printf("Wednesday");
			break;
			
		case 5:
			printf("Thursday");
			break;
			
		case 6:
			printf("Friday");
			break;
			
		case 7:
			printf("Saturday");
			break;
			
		default:
			printf("Invalid Input");		
	}
	
}
