#include<stdio.h>

int main()
{
    float m;
    printf("Enter your number: ");
    scanf("%f", &m);

    if(m >= 40)
{
    printf("\nCongratulations! you are passed");
}
else{
    printf("\n\nBetter luck next time\n\n");
}

    return 0;
}
