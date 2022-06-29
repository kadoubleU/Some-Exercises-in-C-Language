#include <stdio.h>

int main() {
	int numOne;
	int numTwo;
	int amount;
	int difference;
	int product;
	float quotient;
	int moduloDivision;
	
	printf("Type first number: ");
	scanf("%d", &numOne);
		
	printf("Type second number: ");
	scanf("%d", &numTwo);
	
	amount = numOne + numTwo;
	printf("\nThe total amount is: %d\n", amount);
	
	difference = numOne - numTwo;
	printf("The total difference is: %d\n", difference);
	
	product = numOne * numTwo;
	printf("The product is: %d\n", product);
	
	quotient = (float) numOne / numTwo;
	printf("The quotient is: %.2f\n", quotient);
	
	moduloDivision = numOne % numTwo;
	printf("The Modulo Division is: %d\n\n");
	
	//Using increment (++)
	
	for (numOne; numOne <= 10; numOne++) {
		printf("Increment Result: %d\n", numOne);
	}
	
	printf("\n");
	
	//Decrement 
	
	for (numTwo; numTwo > 0 ; numTwo--) {
		printf("Decrement Result: %d\n", numTwo);
	}
	
	return(0);
	
}
