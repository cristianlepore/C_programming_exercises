#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int arrayDimension = 0, i;
    int* arrayPointer;

    scanf("Please insert the array dimension: %d", arrayDimension);
    arrayPointer = (int*)malloc(sizeof(int) * arrayDimension);

    if (arrayPointer == NULL) {
        printf("Error allocating memory!");
        return -1;
    }

    for (i = 0;i < arrayDimension;i++) {
        printf("Insert the %d value of the array:", i + 1);
        scanf("%d\n", arrayPointer[i]);
    }

    free(arrayPointer);
    return 0;
}