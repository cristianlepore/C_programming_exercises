// Counts the repeted digits in a number

#include <stdio.h>
#include <stdlib.h>

int checkForBouble(int num, int** repeted) {
	int i;
	
		printf("Value %d\n", *repeted[0);
		if(num = *repeted){
			return 0;
		}
				
	return 1;
}

int* repetedDigits(int n){
	int *p, *repeted;
	p = (int *) malloc(1 * sizeof(int));
	repeted = (int *) malloc(1 * sizeof(int));
	int digit, i=0, j, index = 0;
	
	while(n/10 != 0){
		digit = n % 10;
		n /= 10;
		p[i] = digit;
		realloc(p, 1 * sizeof(int));
		i++;
	}
	realloc(p, 1 * sizeof(int));
	p[i] = n%10;

	for(j=i; j>=0; j--) {
		int k=0;
		while(k<j){
			if(p[j] == p[k]) {
				if(checkForBouble(p[j], &repeted)){
					repeted[index++] = p[j];
					realloc(repeted, 1 * sizeof(int));
					break;
				}
			}
			k++;
		}
	}

	return repeted;
}

int main() {
	int n, i;
	printf("Enter a number: ");
	scanf("%d", &n);

	int* p = repetedDigits(n);
	
	free(p);
	return 0;
}
