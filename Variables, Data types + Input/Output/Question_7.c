#include <stdio.h>
int main() {
    char ch;
    int num;
    float fnum;
    printf("Enter a character, an integer, and a float: ");
    scanf(" %c %d %f", &ch, &num, &fnum);
    printf("Character: %c, Integer: %d, Float: %.2f\n", ch, num, fnum);
    return 0;
}
