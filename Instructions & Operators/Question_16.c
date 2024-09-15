#include <stdio.h>

int main() {
    float kilometers, miles;
    printf("Enter distance in kilometers: ");
    scanf("%f", &kilometers);
    miles = kilometers * 0.621371;
    printf("Miles: %.5f\n", miles);
    return 0;
}
