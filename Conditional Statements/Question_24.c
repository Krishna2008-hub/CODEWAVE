#include <stdio.h>

int main() {
    char grade;
    printf("Enter a grade (A-F): ");
    scanf(" %c", &grade);
    switch (grade) {
        case 'A': printf("Excellent\n"); break;
        case 'B': printf("Good\n"); break;
        case 'C': printf("Fair\n"); break;
        case 'D': printf("Poor\n"); break;
        case 'F': printf("Fail\n"); break;
        default: printf("Invalid grade\n");
    }
    return 0;
}
