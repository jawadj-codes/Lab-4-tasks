#include<stdio.h>

//Take units consumed as input if units are below 100, apply a 10% discount on the bill
//otherwise no discount.

int main(){
	float units,bill,discount,finalBill;
	
	 printf("Enter units consumed: ");
	 scanf("%f",&units);
	 
	 printf("Enter bill amount: ");
	 scanf("%f",&bill);
	 
	 if (units < 100)
	 {
	 	discount = 0.10 * bill;
	 	finalBill = bill - discount;
	 	
	 	printf("10%% discount applied. \n");
	 	printf("Final bill = %.2f",finalBill);
	 }
	 else
	 {
	 	printf("No discount applied. \n");
	 	printf("Final bill = %.2f",bill);
	 	
	 }
	
}
