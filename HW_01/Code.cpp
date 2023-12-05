#include <stdio.h>
#include <math.h>

double QE(double a, double b, double c) {
	double d = b * b - 4 * a * c;
	if (d >= 0) {
		double r1 = (-b - sqrt(d)) / (2 * a);
		double r2 = (-b + sqrt(d)) / (2 * a);
		return (r1 < r2) ? r1 : r2;
	}
	else {
		printf("No real roots.\n");
		return 0.0;
	}
}

int main() {
	double a, b, c;
	printf("(a, b, c): ");
	scanf_s("%lf %lf %lf", &a, &b, &c);

	double res = QE(a, b, c);
	printf("Smaller root: %.2lf\n", res);

	return 0;
}
