#include <stdio.h>


void inputDimensions(int* rows, int* columns) {
	printf("Enter rows: ");
	scanf_s("%d", rows);

	printf("Enter columns: ");
	scanf_s("%d", columns);
}


int calculateSaplings(int rows, int columns, int minDistance)
{
	int saplings = (rows - 1) * (columns - 1);
	if (minDistance != 0)
		saplings /= minDistance;
	return saplings;
}

int main() {
	int rows, columns, minDistance;
	inputDimensions(&rows, &columns);
	printf("Enter distance between saplings: ");
	scanf_s("%d", &minDistance);

	int output = calculateSaplings(rows, columns, minDistance);

	printf("Maximum saplings: %d\n", output);

	return 0;
}
