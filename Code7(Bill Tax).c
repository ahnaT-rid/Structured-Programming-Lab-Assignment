//Total Bill with Tax and Discount

#include <stdio.h>

#define tr 18.0

int main() {
    const float dr = 0.10;
    float price, quantity, subtotal, dis, tax, total;

    printf("Enter price per item: ");
    scanf("%f", &price);
    printf("\nEnter quantity: ");
    scanf("%f", &quantity);

    subtotal = price * quantity;
    dis = subtotal * dr;
    tax = (subtotal - dis) * (tr / 100);
    total = subtotal - dis + tax;

    printf("Discount: %.3f\n", dis);
    printf("TAX = %.2f\n", tax);
    printf("Final Total = %.2f\n", total);
    return 0;
}
