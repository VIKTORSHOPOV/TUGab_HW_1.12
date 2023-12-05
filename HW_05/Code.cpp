#include <stdio.h>


void swap(int* a, int* b) {
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

int main() {
	int num1, num2;
	puts("Enter value for num1 num2: ");
	scanf_s("%d %d", &num1, &num2);
	printf("Before: num1 = %d, num2 = %d\n", num1, num2);
	swap(&num1, &num2);
	printf("After: num1 = %d, num2 = %d\n", num1, num2);
	return 0;
}
