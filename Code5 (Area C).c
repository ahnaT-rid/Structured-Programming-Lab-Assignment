//Area and Circumference of a Circle
#include <stdio.h>

#define PI 3.14159

int main() {
    const float T = 2.0;
    float radius, area, circumference;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;
    circumference = T * PI * radius;

    printf("\nArea = %.2f sq units \n", area);
    printf("Circumference = %.2f units\n", circumference);

    return 0;
}
