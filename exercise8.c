// Print the first 1000 prime numbers

#include <stdio.h>

typedef enum {true, false} bool;
int isPrime(int n);

int main() {
	int n;

	for(n=2; n<1000; n++){
		if(isPrime(n))
			printf("%d \n", n);
	}
	
	return 0;
}

int isPrime(int n){
	int i;
	bool TRUE = true;
	bool FALSE = false;
	
	
	for(i=2; i<(n/2)+1; i++)
		if(n%i == 0)
			return TRUE;
	
	return FALSE;
}

