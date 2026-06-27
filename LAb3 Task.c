//take two numbers from user and find the large number

#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter your first value: ");
    scanf("%d", &a);

    printf("Enter your second value: ");
    scanf("%d", &b);

    if(a>b){
        printf("%d is the larger than %d\n", a,b);
    }
    else{
        printf("%d is larger than %d\n", b,a);
    }

    return 0;
}
