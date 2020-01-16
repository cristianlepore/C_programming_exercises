#include <stdio.h>
#include "header.h"

int main() {
	int x=3, y=10, n=10;

	printf("Return value: %d \n", check(x, y, n));
	
	return 0;
}

int check(int x, int y, int n){
	return x>=0 && x<n && y>=0 && y<n ? 1 : 0;
}
