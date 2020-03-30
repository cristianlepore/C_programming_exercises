// Write a program that couts the digits in a number

#include <stdio.h>
#include "header.h"

int main() {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int result = count(n);
	printf("The number %d has %d digits.\n", n, result);
	return 0;
}

int count(int n) {
	int i = 0;
	while(n / 10 != 0){
		i++;
		n /= 10;
	}
	
	return ++i;
}
