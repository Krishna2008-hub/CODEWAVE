#include <stdio.h>

int main() {
    float num1, num2;
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    printf("Sum: %.2f\n", num1 + num2);
    printf("Difference: %.2f\n", num1 - num2);
    printf("Product: %.2f\n", num1 * num2);
    printf("Quotient: %.2f\n", num1 / num2);
    printf("Remainder: %.2f\n", (int)num1 % (int)num2);
    return 0;
}
