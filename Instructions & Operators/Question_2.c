#include <stdio.h>

int main() {
    float num1, num2, average;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    average = (num1 + num2) / 2;
    printf("Average: %.2f\n", average);
    return 0;
}
