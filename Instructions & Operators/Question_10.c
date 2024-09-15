#include <stdio.h>

int main() {
    float price, discount, discountedPrice;
    printf("Enter the price and discount percentage: ");
    scanf("%f %f", &price, &discount);
    discountedPrice = price - (price * discount / 100);
    printf("Discounted Price: %.2f\n", discountedPrice);
    return 0;
}
