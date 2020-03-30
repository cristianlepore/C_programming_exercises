/* go.c
   Takes one input argument from the command line, an integer,
   and returns 1 if the number is prime, and 0 if it is not.
*/

#include <stdio.h>
#include <stdlib.h>
#include "primes.h"

int main() {
    char str[5];
    printf("Enter one input (an integer): ");
    scanf("%s", &str);
    int n = atoi(str);

    int result = isPrime(n);
    if(result == 1)
        printf("The entering number %d is prime", n);
    else
        printf("The entering number %d is NOT prime", n);

    return 0;
}