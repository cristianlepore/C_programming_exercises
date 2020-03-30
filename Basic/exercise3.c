//  FizzBuzz : Write a program that prints the numbers from 1 to 100. For multiples of three print "Fizz" instead of the number and for the multiples of five print "Buzz". For numbers which are multiples of both three and five print "FizzBuzz"

#include <stdio.h>

int main(void) {
	int i=1;
	int n=100;
	
	for(;i<=n; i++){
		if(i%3 == 0 && i%5 == 0)
			printf("%d FizzBuzz \n", i);
		else if(i%3 == 0)
			printf("%d Fizz \n", i);
		else if(i%5 == 0)
			printf("%d Buzz \n", i);
		else
			printf("%d \n", i);
				
	}
	
	return 0;
}
