#include <stdio.h>

int main(){
	int a, b;
	
	printf("Enter a two number with space between them: ");
	scanf("%d %d", &a, &b);
	
	if (a != b) {
		printf("The numbers a and be are different. Down is the result.\n");
	}
	
	if (a == b && a > b) {
		printf("The numbers are not equal, but a is greater than b. This is Variant One.\n");
	}else if (a == b && a < b) {
		printf("The numbers are not equal, but a is less than b. This is Variant Two.\n");
	}else if( a == b || a > b) {
		printf("The numbers a and b are equal or a is greater than b. a = %d, b = %d. This is Variant Three\n", a, b);
	}else if(a == b || a < b) {
		printf("The numbers a and b are equal or a is less than b. a = %d, b = %d. This is Variant 4. \n", a, b);
	}
		
	return 0;
}
