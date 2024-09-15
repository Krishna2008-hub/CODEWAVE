#include <stdio.h>

int main() {
    float inches, centimeters;
    printf("Enter length in inches: ");
    scanf("%f", &inches);
    centimeters = inches * 2.54;
    printf("Centimeters: %.2f\n", centimeters);
