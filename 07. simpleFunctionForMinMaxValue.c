#include <stdio.h>

float minMaxFunction( float a, float b, float c);

int main() {
	
	float x, y, z;
	
	printf("Enter three numbers.\n");
	
	printf("Number One: ");
	scanf("%f", &x);
	
	printf("NumberTwo: ");
	scanf("%f", &y);
	
	printf("Number Three: ");
	scanf("%f", &z);
	
	minMaxFunction(x, y, z);
}

float minMaxFunction(float a, float b, float c) {
	
	if (a <= b && a <= c) {
		printf("The minimum value is: %.2f\n", a);
		
	}else if (b <= a && b <= c) {
		printf("The minimum value is: %.2f\n", b);
	
	}else {
		printf("The minimum value is %.2f\n", c);
	}
	
	if (a >= b && a >= c) {
		printf("The maximum value is: %.2f", a);
	
	}else if (b >= a && b >= c) {
		printf("The maximum value is: %.2f", b);
		
	}else {
		printf("The maximum value is: %.2f", c);
	}
	
}
