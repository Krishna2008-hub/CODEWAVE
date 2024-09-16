#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0 && num % 5 == 0)
        printf("Divisible by both 2 and 5\n");
    else if (num % 2 == 0)
        printf("Divisible by 2\n");
    else if (num % 5 == 0)
        printf("Divisible by 5\n");
    else
        printf("Not divisible by 2 or 5\n");
    return 0;
}
