#include<stdio.h>

int main() {
	int n, i, result;
	printf("<< Times Multiplication Table Program >> \n");
	printf("Enter number : ");
	scanf("%d", &n);

	for (i = 0; i <= 12; i++) {
		result = n * i;
		printf("%d x %d = %d \n", n, i, result);
	}
	
	return 0;
}