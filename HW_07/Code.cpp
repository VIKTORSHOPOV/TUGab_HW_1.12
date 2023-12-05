#include <stdio.h>


float sq(float s) {
	return s * s;
}

float rect(float l, float w) {
	return l * w;
}

float para(float b, float h) {
	return b * h;
}

float trap(float b1, float b2, float h) {
	return 0.5 * (b1 + b2) * h;
}

float circ(float r) {
	return 3.14 * r * r;
}

int main() {
	int choice;
	float s, l, w, b, h, r;

	printf("\nMenu:\n");
	printf("1.Area of a square\n");
	printf("2.Area of a rectangle\n");
	printf("3.Area of a parallelogram\n");
	printf("4.Area of a trapezoid\n");
	printf("5.Area of a circle\n");
	printf("0. Exit\n");

	printf("Enter your choice: ");
	scanf_s("%d", &choice);

	switch (choice) {
	case 1:
		printf("Enter the side length of the square: ");
		scanf_s("%f", &s);
		printf("Area: %.2f\n", sq(s));
		break;

	case 2:
		printf("Enter the length and width of the rectangle: ");
		scanf_s("%f %f", &l, &w);
		printf("Area: %.2f\n", rect(l, w));
		break;

	case 3:
		printf("Enter the base and height of the parallelogram: ");
		scanf_s("%f %f", &b, &h);
		printf("Area: %.2f\n", para(b, h));
		break;

	case 4:
		printf("Enter bases and the height of the trapezoid: ");
		scanf_s("%f %f %f", &b, &w, &h);
		printf("Area: %.2f\n", trap(b, w, h));
		break;

	case 5:
		printf("Enter the radius of the circle: ");
		scanf_s("%f", &r);
		printf("Area: %.2f\n", circ(r));
		break;

	case 0:
		printf("Exiting...\n");
		break;

	default:
		printf("Invalid choice.\n");
	}



	return 0;
}
