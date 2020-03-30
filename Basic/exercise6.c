#include <stdio.h>
#include <stdlib.h>
#include "header.h"

int main() {
    int n, i;
    printf("Enter a two digits number: ");
    scanf("%d", &n);
    
    reverse(n);
    return 0;
}

void reverse(int n) {
	int* ptr = (int*) malloc(1 * sizeof(int));
	int j, i = 0;

	while(n / 10 > 0){
		ptr = (int *) realloc(ptr, 1 * sizeof(int));
		ptr[i] = n % 10;
		n /= 10;
		i++;
	}
	ptr[i] = n % 10;
	
	for(j=0; j<=i; j++)
		printf("%d", ptr[j]);
	
	free(ptr);
}
