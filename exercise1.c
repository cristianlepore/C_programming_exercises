// Write a program that converts from degrees Fahrenheit (F) to degrees Celsius (C)

#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Enter a value:");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 1.8;

    printf("Result: %.2f", celsius);

    return 0;
}
