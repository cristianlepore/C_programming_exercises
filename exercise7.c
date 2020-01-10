// Find if a number is prime.

#include <stdio.h>

int isprime(int n);

int main(int argc, char *argv[])
{
  printf("isprime(%d)=%d\n", 12, isprime(12));
  printf("isprime(%d)=%d\n", 17, isprime(17));
  return 0;
}


int isprime(int n) {
	int i;
	
	for(i=2; i<(n/2)+1; i++){
		if(n%i == 0)
			return 0;
	}
	
	return 1;
}


