#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int sqrt_num = sqrt(num);
    if (sqrt_num * sqrt_num == num)
        printf("Perfect square\n");
    else
        printf("Not a perfect square\n");
    return 0;
}
