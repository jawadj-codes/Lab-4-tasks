#include <stdio.h>
//Take age as input and check if the person is eligible to vote (age 18 or above).

int main(){
	
	int age;
	
	printf("Enter the age: ");
	scanf("%d",&age);
	
	if (age >= 18) {
		printf("Person is eligible to vote");
	}
	else{
		printf("Person is not eligible to vote");
	}
}
