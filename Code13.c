//Two-Variable Expression
/*Description: Write a program that reads two integers p and q. Perform these operations sequentially:

1)x = p++;
2) y = --q;
3) z = x + y;
Finally, print the values of p, q, x, y, and z (each on a new line).
*/

#include<stdio.h>

int main()
{
    int p,q,x,y,z;

    printf("Enter the first integer: ");
    scanf("%d", &p);

    printf("Enter the second integer: ");
    scanf("%d", &q);

x = p++;
y = --q;
z = x + y;

    printf(" %d\n %d\n %d\n %d\n %d\n ", p,q,x,y,z);
    return 0;

}
