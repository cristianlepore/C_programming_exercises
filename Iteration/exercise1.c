// Fibonacci sequence loop

#include <stdio.h>

int fibo(int n) {
    int tmp1 = 0;
    int tmp2 = 0;
    int result = 0;
    int i;

    for(i=0; i<n; i++) {
    	if(i == 0) {
    		tmp1 = 0;
    		tmp2 = 0;
		}
    	else if(i == 1) {
    		tmp1 = tmp1;
    		tmp2 = 1;
		}
		else {
			tmp1 = tmp2;
			tmp2 = result;
		}
		result = tmp1 + tmp2;
    }
	
	return result;
}

int main() {
    int n = 13;
    printf("%d\n", fibo(n));

    return 0;
}
