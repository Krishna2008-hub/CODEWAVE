#include <stdio.h>
int main() {
    char name[30];
    printf("Enter your full name: ");
    gets(name);
    printf("Hello, %s!\n", name);
    return 0;
}
