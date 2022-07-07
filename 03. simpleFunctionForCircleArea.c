#include <stdio.h>
#include <math.h>

float circleArea(float);

int main() {
	float radius, result;
	
	printf("Enter the circle radius: ");
	scanf("%f", &radius);
	
	result = circleArea(radius);
	printf("The Circle Area Radius is: %.2f", result);
}

float circleArea(float r) {
	float area;
	
	area = M_PI * r * r;
	
	return area;
}
