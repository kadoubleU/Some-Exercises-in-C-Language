#include <stdio.h>

int main() {
	
	int a;
	int b;
	
	printf("Enter a number One: ");
	scanf("%d", &a);
	
	printf("Enter a number Two: ");
	scanf("%d", &b);	
	
	if (a == b) {
		printf("The numbers are equal.\n");
	}else if (a != b){
		printf("The numbers are not equal.\n");
	}
	
	if(a > b) {
		printf("The first number is greater than second number, but they are not equal.\n");
	}else if(a < b) {
		printf("The first number is less than second number, but they are not equal.\n");		
	}
	
	if (a >= b) {
		printf("The first number is greater than second number or maybe they are equal.");
	} else if (a <= b) {
		printf("The first number is less than second number or maybe they are equal.");
	}
	
	return (0);
}
