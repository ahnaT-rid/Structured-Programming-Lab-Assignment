//Fahrenheit to Celsius Converter

#include <stdio.h>

#define F_P 32

int main() {
    const float S_F = 5.0 / 9.0;
    float fahrenheit, celsius;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - F_P) * S_F;

    printf("\n%.2f degree F = %.2f degree C\n", fahrenheit, celsius);

    return 0;
}
