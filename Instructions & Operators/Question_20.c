#include <stdio.h>
#include <math.h>

int main() {
    double number, logValue;
    printf("Enter a number: ");
    scanf("%lf", &number);
    logValue = log(number);
    printf("Logarithm: %.5lf\n", logValue);
    return 0;
}
