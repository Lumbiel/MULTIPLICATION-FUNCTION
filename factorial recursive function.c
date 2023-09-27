#include <stdio.h>
#include <stdlib.h>

int factorial(int number);

int main() {
	int number;
	printf("Enter number\n");
	scanf("%d", &number);
	printf("%d", factorial(number));
	
	return 0;
}
int factorial(int number){
	if (number>=1) {
		return number*factorial(number-1);
	} else{
		return 1;
	}
}
