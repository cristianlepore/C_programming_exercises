// Prints the largest number inserted by the user

#include <stdio.h>
#include "header.h"

int main(){
	float n, max = 0;
	do{
		printf("Enter a number: ");
		scanf("%f", &n);
		if(n > max)
			max = n;
	} while (n!= 0);

	printf("The largest number entered was: %.3f \n", max);

	return 0;
}
