#include <stdio.h>
#include <math.h>

int main() {
    int number, square, cube;
    printf("Enter a number: ");
    scanf("%d", &number);
    square = number * number;
    cube = number * number * number;
    printf("Square: %d, Cube: %d\n", square, cube);
    return 0;
}
