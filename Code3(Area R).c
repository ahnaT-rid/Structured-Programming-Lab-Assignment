//Area of a Rectangle (Integer Inputs, Float Output)
#include <stdio.h>

int main()
{
    int length, width;
    float area;

    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%d", &width);

    area = length * width;  // integer multiplication, stored as float. Area can be integer or float.

    printf("Area = %.2f sq units\n", area); //.2 representing two floating point.

    return 0;
}
