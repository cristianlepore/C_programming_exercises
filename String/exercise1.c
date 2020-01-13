// Convert provences in upper case letters

#include <stdio.h>
#include <ctype.h> 

void toUpper(char **, int);

int main(int argc, char *argv[])
{
  	char *provinces[] = { "British Columbia", "Alberta", "Saskatchewan", 
                        "Manitoba", "Ontario", "Quebec", "New Brunswick",
                        "Nova Scotia", "Prince Edward Island", "Newfoundland",
                        "Yukon", "Northwest Territories", "Nunavut" };
    int arrayLen = sizeof(provinces)/ sizeof(provinces[0]);

    toUpper(provinces, arrayLen);

  	return 0;
}

void toUpper(char **ptr, int len) {
    int n = 0;
    for (int i = 0; i < len; i++) {
        int c = 0;
        while (ptr[i][c] != '\0') {
            if (ptr[i][c] >= 'a' && ptr[i][c] <= 'z')
                printf("%c", ptr[i][c] - 32);
            else
                printf("%c", ptr[i][c]);
            c++;
        }
        printf("\n");
    }

	return;
}