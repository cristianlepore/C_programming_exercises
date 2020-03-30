// Counts digits in a given number

#include <stdio.h>
#include <stdlib.h>

void repetedDigits(int n){
	int *p = (int *) malloc(1 * sizeof(int));
	int digit, i=0, j, index = 0;
	int arr[10] = {0};	
	
	while(n/10 != 0){
		digit = n % 10;
		n /= 10;
		p[i] = digit;
		realloc(p, 1 * sizeof(int));
		i++;
	}
	realloc(p, 1 * sizeof(int));
	p[i] = n%10;

	for(j=0; j<=i; j++) {
		arr[p[j]]++; 
	}
	
	for(j=0; j<10; j++) {
		printf("Posizione %d%: %d\n", j, arr[j]);
	}
	
}

int main() {
	int n, i;
	printf("Enter a number: ");
	scanf("%d", &n);

	repetedDigits(n);
	
	return 0;
}
