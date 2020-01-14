// Scrabble game

#include <stdio.h>
#include "header.h"
#include <ctype.h> 
#include <stdlib.h>

int main() {
	char str[30];
	printf("Enter a word: ");
	scanf("%s", &str);
	char* p = toUpper(str);
	
	printf("Scrabble value: %d", score(p));
	free(p);
	return 0;
}

int score(char* s) {
	int i = 0, count = 0;
	
	while(s[i] != '\0') {
		if( (s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') )
			switch(s[i]){
				case 'D': case 'G':
					count += 2;
					break;
				case 'B': case 'C': case 'M': case 'P':
					count += 3;
					break;
				case 'F': case 'H': case 'V': case 'W': case 'Y':
					count += 4;
					break;
				case 'K':
					count += 5;
					break;
				case 'J': case 'X':
					count += 8;
					break;
				case 'Q': case 'Z':
					count += 10;
					break;
				default:
					count += 1;
					break;
			}
		i++;
	}

	return count;
}

char* toUpper(char s[]) {
	char* str = (char*) malloc(1 * sizeof(char));
	int i = 0;
	while(s[i] != '\0') {
		if(s[i] >= 'a' && s[i] <= 'z') {
			str[i] = toupper(s[i]);
		}
		realloc(str, 1 * sizeof(char));
		i++;
	}
	
	return str;
}
