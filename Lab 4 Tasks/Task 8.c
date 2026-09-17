#include<stdio.h>

//Take a grade letter (A, B, C, D, F) as input and print a remark for each
//(e.g. A+ ? "Excellent", A ? "Very Good", B ? "Good", C ? "Work Hard”, D ? "Work Hard", F
//? "Fail") using switch.

int main(){
	char grade;
	
	printf("Enter the grade(A, B, C, D, F): ");
	scanf(" %c",&grade);
	
	switch(grade){
	case 'A':
			printf("Very Good");
			break;
			
		case 'B':
			printf("Good");
			break;
			
		case 'C':
			printf("Average");
			break;
			
		case 'D':
			printf("Work Hard");
			break;
			
		 case 'F':
            printf("Fail");
            break;

        default:
            printf("Invalid grade");
	}
	
}
