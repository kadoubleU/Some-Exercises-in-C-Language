#include <stdio.h>

float squareArea(float a);

int main() {
	
	float side, result;
	
	printf("Enter the length of the square: ");
	scanf("%f", &side);
	
	result = squareArea(side);
	
	printf("The Square Area is: %.2f", result);
	
	return 0;
}

float squareArea(float a) {
	float area;
	area = a * a;
	
	return area;
}
