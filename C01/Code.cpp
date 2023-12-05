#include <iostream>
#include <stdio.h>
#include <math.h>

float AreaCircle(float r)
{
	return 3.14 * r * r;
}

float AreaRectangle(float a, float b)
{
	return a * b;
}

float AreaTriangle(float a, float b, float c)
{
	return 0.5 * a * b * sin(c);
}

int CheckTriangleValidity(float a, float b, float c)
{
	if (a + b > c && a + c > b && b + c > a)
		return 1;
	else
		return 0;
}

float Distance(float x1, float y1, float x2, float y2)
{
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main()
{
	double x[5], y[5];
	double sum = 0.0;
	for (int i = 0; i < 5; i++)
	{
		printf("Point %d coordinates X Y: ", i + 1);
		scanf_s("%lf %lf", &x[i], &y[i]);
	}
	for (int i = 1; i < 5; i++)
	{
		sum += Distance(x[i - 1], y[i - 1], x[i], y[i]);
	}
	printf("%.2lf", sum);


	return 0;
}