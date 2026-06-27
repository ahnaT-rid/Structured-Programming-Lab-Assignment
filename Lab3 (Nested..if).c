#include<stdio.h>

int main()
{
    float m;

    printf("Enter your number: ");
    scanf("%f", &m);

    if(m>=40)
    {
        printf("\nCongratulations! you are passed.\n");

        if(m>=60)
            {
            printf("\nYou almost did it.\n");
        }
        else{
            printf("Study hard.\n");
        }

        if(m>=80 && m<=100)
            {
            printf("It's a Plus. Treat something nice.\n");
        }
        else{
            printf("Don't worry! it's already enough to be passed.\n");
        }

    }
    else{
        printf("Ahh! you are failed.");
    }

    return 0;
}
