#include <stdio.h>
#include <stdlib.h>

int multiplication(int N) {
	int count;
	  while (count <= 12) {
      int multiplication = N * count;
	  printf(" %d * %d = %d\n", N, count, multiplication);
      count++;
	}
	
	return multiplication;
}

int main(){
	int N;
	printf("enter number\n");
	scanf("%d",&N);
	int result = multiplication(N);
	return 0;
}
