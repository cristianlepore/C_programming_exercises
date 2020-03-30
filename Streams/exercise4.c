// Write a program that asks the user to enter three strings. After they have entered all three strings, print the strings out using all uppercase letters.

#include <stdio.h>

void toUpper(char[3][100], int);

int main() {
    int i = 0, n = 3;
    char arrStr[3][100] = {"","",""};

    printf("Please, enter three strings below.\n");
    while (i < n) {
        printf("Enter your string: ");
        scanf("%s", arrStr[i]);
        i++;
    }

    toUpper(arrStr, n);

    return 0;
}

void toUpper( char arrStr[3][100],int count) {
    char newArrStr[3][100] = { "","","" };

    for (int i = 0; i < count; i++) {
        int c = 0;
        while (arrStr[i][c]!= '\0') {
            if (arrStr[i][c] >= 'a' && arrStr[i][c] <= 'z')
                newArrStr[i][c] = arrStr[i][c] - 32;
            else
                newArrStr[i][c] = arrStr[i][c];

            printf("%c", newArrStr[i][c]);
            c++;
        }
        printf("\n");
    }

}