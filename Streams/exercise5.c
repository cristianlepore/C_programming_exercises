// Alter the program so that it prints out the all-caps strings in reverse.

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char m[3][100];
} arr;

arr toUpper(char[][100], int);
void reverse(arr, int);

int main() {
    int i = 0, rows = 3;
    char arrStr[3][100] = {"","",""};

    printf("Please, enter three strings below.\n");
    while (i < rows) {
        printf("Enter your string: ");
        scanf("%s", arrStr[i]);
        i++;
    }

    arr upperCase = toUpper(arrStr, rows);
    reverse(upperCase, rows);

    return 0;
}

arr toUpper( char arrStr[][100], int rows) {
    arr result;

    for (int i = 0; i < rows; i++) {
        int c = 0;
        while (arrStr[i][c] != '\0') {
            if (arrStr[i][c] >= 'a' && arrStr[i][c] <= 'z')
                result.m[i][c] = arrStr[i][c] - 32;
            else
                result.m[i][c] = arrStr[i][c];
            c++;
        }
        result.m[i][c] = '\0';
    }

    return result;
}

void reverse(arr array, int rows) {
    for (int i = 0; i < rows; i++) {
        int c = 100;
        while (--c >= 0) {
            if (array.m[i][c] =='\0')
                break;
        }
        for (; c>= 0; --c)
            printf("%c", array.m[i][c]);
        printf("\n");
    }
    return;
}