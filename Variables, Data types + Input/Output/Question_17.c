#include <stdio.h>
int main() {
    float num = 12.345;
    int int_num = (int)num;
    printf("Original float: %.3f, After type casting to int: %d\n", num, int_num);
    return 0;
}
