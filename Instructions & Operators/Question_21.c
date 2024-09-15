#include <stdio.h>
#include <math.h>

int main() {
    float base, height, hypotenuse;
    printf("Enter the base and height of the triangle: ");
    scanf("%f %f", &base, &height);
    hypotenuse = sqrt(base * base + height * height);
    printf("Hypotenuse: %.2f\n", hypotenuse);
    return 0;
}
