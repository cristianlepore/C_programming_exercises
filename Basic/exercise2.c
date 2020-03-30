// Write a program that computes the (two) roots of the quadratic equation

#include <stdio.h>
#include <math.h>

int main(void) {
	int a = 1;
	int b = -3;
	int c = 2;
	double x1, x2;
	

	if( (b*b) - (4.0 * a * c) < 0 )
		printf("The equation: %dx^2 + %dx + %d has not a solution - delta < 0", a, b, c);
	else {
		x1 = -b + sqrt((b*b) - (4.0 * a * c)) / (2 * a);
		x2 = -b - sqrt((b*b) - (4.0 * a * c)) / (2 * a);
		printf("The two solution of the equation %dx^2 + %dx + %d are: %.2f and %.2f", a, b, c, x1, x2);
	}
	
	return 0;
}
