// Read data char one character at the time.

#include <stdio.h>

int main() {
	printf("Insert a character: ");
	char c = getchar();
	printf("You have inserted: ");
	putchar(c);
	putchar('\n');
	return 0;
}