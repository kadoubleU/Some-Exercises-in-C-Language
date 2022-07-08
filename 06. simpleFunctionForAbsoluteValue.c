#include <stdio.h>

int absoluteValue(int n);

int main() {
	int num, result;
	
	printf("Enter a negative number: ");
	scanf("%d", &num); //Read a number
	
	result = absoluteValue(num);
	
	printf("The absolute value for the number %d is: %d", num, result);
}

int absoluteValue(int n) {
	
	
	if (n > 0) {
	return n;
		
	}else {
		
		return - n;
	}
	
	
}
