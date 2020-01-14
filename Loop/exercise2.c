// Find the GCD of two numbers

#include <stdio.h>

int main() {
	int n1, n2;
	printf("Enter two integers: ");
	scanf("%d %d", &n1, &n2);
	
	if(n1 >= n2)
		printf("Greatest common divisor: %d", gcd(n1, n2));
	else
		printf("Greatest common divisor: %d", gcd(n2, n1));
		
	return 0;
}

int gcd(int m, int n) {
	int divisor, reminder;
	do{
		divisor = m / n;
		reminder = m % n;
		m = divisor;
		if(m != 0)
			break;
		n = reminder;
	} while(n != 0);
	
	return m;
}
