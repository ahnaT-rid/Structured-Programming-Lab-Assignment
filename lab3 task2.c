//take 3 user input. find the largest among them.
#include<stdio.h>

int main()
{
    int n1, n2, n3;

    printf("Enter your first value: ");
    scanf("%d", &n1);

    printf("Enter your second value: ");
    scanf("%d", &n2);

    printf("Enter your third value: ");
    scanf("%d", &n3);

    if (n1 >= n2 && n1 >= n3) {
        printf("%d is the largest number.\n", n1);
    }
    else if (n2 >= n1 && n2 >= n3) {
        printf("%d is the largest number.\n", n2);
    }
    else {
        printf("%d is the largest number.\n", n3);
    }
 return 0;
}

