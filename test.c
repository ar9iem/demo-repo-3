#include <stdio.h>
int main(){
	int a = 0;
	int b = 0;

	printf("Enter value of A: ");
	scanf("%d", &a);
	printf("Enter value of B: ");
	scanf("%d", &b);
	printf("Sum of %d and %d is: %d\n", a, b, a + b);

	return 0;
}
