#include <stdio.h>

float cubeOfNumber(float a);

int main() {
	
	float x;
	float result;
	
	printf("Enter a number: ");
	scanf("%f", &x); //Reading the user input
	
	result = cubeOfNumber(x);
	
	printf("The cube of the number %.2f is: %.2f", x, result);
	
	return (0);
}

float cubeOfNumber(float a) {
	
	float cube;
	
	cube = a * a * a;
	
	return cube;
}
