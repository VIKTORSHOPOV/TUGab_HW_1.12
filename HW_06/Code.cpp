#include <stdio.h>

float add(float a, float b) {
	return a + b;
}

float multiply(float a, float b) {
	return a * b;
}

float divide(float a, float b) {
	if (b != 0) {
		return a / b;
	}
	else {
		return -1;
	}
}

float power3(float num) {
	return num * num * num;
}

void enterArray(int arr[], int size) {
	printf("Enter %d elements:\n", size);
	for (int i = 0; i < size; ++i) {
		printf("Element %d: ", i + 1);
		scanf_s("%d", &arr[i]);
	}
}

void outputArray(int arr[], int size) {
	printf("Array elements:\n");
	for (int i = 0; i < size; ++i) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {

	int choice;
	float num1, num2;
	int array[50];
	int arraySize;


	printf("\nMenu:\n");
	printf("1. Add two numbers\n");
	printf("2. Multiply two numbers\n");
	printf("3. Divide two numbers\n");
	printf("4. Raise a number to the 3rd power\n");
	printf("5. Enter elements of an array\n");
	printf("0. Exit\n");

	printf("Choice: ");
	scanf_s("%d", &choice);

	switch (choice)
	{
	case 1:
		printf("Enter two numbers: ");
		scanf_s("%f %f", &num1, &num2);
		printf("Result: %.2f\n", add(num1, num2));
		break;

	case 2:
		printf("Enter two numbers: ");
		scanf_s("%f %f", &num1, &num2);
		printf("Result: %.2f\n", multiply(num1, num2));
		break;

	case 3:
		printf("Enter two numbers: ");
		scanf_s("%f %f", &num1, &num2);
		if (divide(num1, num2) == -1) {
			printf("Error: Division by zero\n");
		}
		else {
			printf("Result: %.2f\n", divide(num1, num2));
		}
		break;

	case 4:
		printf("Enter a number: ");
		scanf_s("%f", &num1);
		printf("Result: %.2f\n", power3(num1));
		break;

	case 5:
		printf("Enter the size of the array: ");
		scanf_s("%d", &arraySize);
		enterArray(array, arraySize);
		outputArray(array, arraySize);
		break;

	case 0:
		printf("Exiting...\n");
		break;

	default:
		printf("Invalid choice.\n");
	}



	return 0;
}
