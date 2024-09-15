#include <stdio.h>

int main() {
    float angle1, angle2, angle3;
    printf("Enter two angles of a triangle: ");
    scanf("%f %f", &angle1, &angle2);
    angle3 = 180 - (angle1 + angle2);
    printf("Third angle: %.2f\n", angle3);
    return 0;
}
