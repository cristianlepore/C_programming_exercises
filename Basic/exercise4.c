// Write a program that displays a triangle with height \(n\) and width \(2n-1\).

#include <stdio.h>

int main() {
	int n = 25;
	int i=n-1, j;
	
	while(i>=0) {
		j = 0;
		for(;j<=i; j++)
			printf(" ");
		for(;j<=n; j++)	
			printf("*");
		j=1;
		for(;j<n-i; j++)
			printf("*");
			
		i--;
		printf("\n");
	}
	
	return 0;	
}
