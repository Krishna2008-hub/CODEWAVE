#include <stdio.h>
int main() {
    int num1, num2, num3;
    float avg;
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    avg = (num1 + num2 + num3) / 3.0;
    printf("Average: %.2f\n", avg);
    return 0;
}
