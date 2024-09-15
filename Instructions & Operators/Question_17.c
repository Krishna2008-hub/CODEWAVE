#include <stdio.h>

int main() {
    int days, years, weeks;
    printf("Enter number of days: ");
    scanf("%d", &days);
    years = days / 365;
    weeks = (days % 365) / 7;
    days = (days % 365) % 7;
    printf("%d year(s), %d week(s), and %d day(s)\n", years, weeks, days);
    return 0;
}
