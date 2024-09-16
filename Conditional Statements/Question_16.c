#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 7 == 0)
        printf("Divisible by both 3 and 7\n");
    else
        printf("Not divisible by both\n");
    return 0;
}
