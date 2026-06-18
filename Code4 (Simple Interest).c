//Simple Interest Calculation
//And calculate the New principal
#include <stdio.h>

int main()
{
    float principal, rate, time, interest;
    double new_principal;


    printf("Enter principal: ");
    scanf("%f", &principal);

    printf("\nEnter rate: ");
    scanf("%f", &rate);

    printf("\nEnter time: ");
    scanf("%f", &time);

    interest = (principal * rate * time) / 100;
    new_principal = principal + interest;

    printf("\nSimple Interest = %.2f", interest);
    printf("\nNew capital is: %4lf\n", new_principal);


    return 0;
}
