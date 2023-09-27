#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int a, b, temp;
	
	//input a and b
	printf("enter a");
	scanf("%d",&a);
	printf("enter b");
	scanf("%d",&b);
	
	//swapping of two integers
	temp = a;
	a = b;
	b = temp;
	
	//output the after swap
	printf("After swapping");
	
	printf("a = %d", a);
	
	printf("b = %d", b);
	
	return 0;
		
}
