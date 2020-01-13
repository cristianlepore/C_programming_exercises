// Fibonacci

#include <stdio.h>

int Fibonacci(int n) {
    if (n==0) 
		return 0;
    else if (n==1) 
		return 1;
    else 
		return Fibonacci(n-1) + Fibonacci(n-2);
}

int main(int argc, char* argv[]) {
	int n = atoi(argv[1]);

    int Fn = Fibonacci(n);
    printf("Fibonacci(%d) = %d\n", n, Fn);
    
	return 0;
}

