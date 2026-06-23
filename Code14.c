//The Circular Reset
/* Description: Write a program that reads one integer n. Perform these four operations in sequence:
n1 = ++n;
n2 = n--;
n3 = --n;
n4 = n++;

Finally, print the final value of n, followed by n1, n2, n3, and n4 (space-separated on one line).
*/

#include<stdio.h>

int main()
{
    int n, n1,n2,n3,n4;

    printf("Enter your integer value: ");
    scanf("%d", &n);

n1 = ++n;
n2 = n--;
n3 = --n;
n4 = n++;

printf("%d %d %d %d %d", n, n1,n2,n3,n4);

return 0;

}
