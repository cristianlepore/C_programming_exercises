// Counts the repeted digits in a number

#include <stdio.h>
#include <stdlib.h>

int check(int num, int* repeted) {
	int i;
	
	for(i=0; i<sizeof(repeted)/sizeof(repeted[0]); i++)
		if(num = repeted[i]){
			printf("Repeted; %d\n", repeted[i]);
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
				if(check(p[j], repeted)){
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
	
	for(i=0; i<sizeof(p)/sizeof(p[0]); i++)
		printf("%d\n", p[i]);
		
	free(p);
	return 0;
}
