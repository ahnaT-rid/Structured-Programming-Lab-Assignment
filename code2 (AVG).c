//Average of Three Floating-Point Numbers

#include <stdio.h>

int main()
{
    int a, b, c, d;
    float avg;

    printf("Enter the First Number: ");
    scanf("%d", &a);

    printf("Enter the Second Number: ");
    scanf("%d", &b);

    printf("Enter the Third Number: ");
    scanf("%d", &c);

    printf("Enter the Forth Number: ");
    scanf("%d", &d);

    avg = (a + b + c + d) / 4;

    printf("Average = %.2f\n", avg);

    return 0;
}
