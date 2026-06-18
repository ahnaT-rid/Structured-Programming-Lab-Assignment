//Area of a Triangle (Base & Height)

#include <stdio.h>

#define HALF 0.5

int main()
{

    float base, height, area;

    printf("Enter base of triangle: ");
    scanf("%f", &base);

    printf("\nEnter height of triangle: ");
    scanf("%f", &height);

    area = HALF * base * height;

    printf("\nArea of triangle = %.2f\n", area);

    return 0;
}
