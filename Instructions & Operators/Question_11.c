#include <stdio.h>

int main() {
    float distance, time, averageSpeed;
    printf("Enter distance traveled (km) and time taken (hours): ");
    scanf("%f %f", &distance, &time);
    averageSpeed = distance / time;
    printf("Average speed: %.2f km/h\n", averageSpeed);
    return 0;
}
