#include <stdio.h>
#include <math.h>

void input(int a[], int s)
{
	printf("Enter array elements:\n");
	for (int i = 0; i < s; i++) {
		printf("Enter element %d: ", i);
		scanf_s("%d", &a[i]);
	}
}

void output(int a[], int s)
{
	printf("\n");
	printf("Array elements: ");
	for (int i = 0; i < s; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
}

int maxIndex(int a[], int s)
{
	int mIdx = 0;
	for (int i = 1; i < s; i++) {
		if (a[i] > a[mIdx]) {
			mIdx = i;
		}
	}
	return mIdx;
}

int minIndex(int a[], int s)
{
	int mIdx = 0;
	for (int i = 1; i < s; i++) {
		if (a[i] < a[mIdx]) {
			mIdx = i;
		}
	}
	return mIdx;
}

int sum(int a[], int s)
{
	int sSum = 0;
	for (int i = 0; i < s; i++) {
		sSum += a[i];
	}
	return sSum;
}

float average(int a[], int s)
{
	int sSum = sum(a, s);
	return (float)sSum / s;
}

float standardDev(int a[], int s)
{
	float avg = average(a, s);
	float sSum = 0;

	for (int i = 0; i < s; i++) {
		sSum += pow(a[i] - avg, 2);
	}

	return sqrt(sSum / s);
}

int main()
{
	int array[100];
	int size, choice;

	printf("Enter array size: ");
	scanf_s("%d", &size);

	input(array, size);
	output(array, size);


	printf("\nMenu:\n1. Max element and index\n2. Min element and index\n3. Sum of elements\n");
	printf("4. Average of elements\n5. Standard deviation\n0. Exit\n");
	printf("Enter choice: ");
	scanf_s("%d", &choice);

	switch (choice)
	{
	case 1: printf("Max element at index %d\n", maxIndex(array, size)); break;
	case 2: printf("Min element at index %d\n", minIndex(array, size)); break;
	case 3: printf("Sum of elements: %d\n", sum(array, size)); break;
	case 4: printf("Average of elements: %.2f\n", average(array, size)); break;
	case 5: printf("Standard deviation: %.2f\n", standardDev(array, size)); break;
	case 0: printf("Exiting...\n"); break;
	default: printf("Invalid choice.\n");
	}


	return 0;
}
