//The Hidden Assignment Trap
/*Description: Write a program that reads one integer x.
Perform the following assignments in order, and then print the final values of x, a, b, c, and d
(all on one line, space-separated).*/

#include <stdio.h>

int main()
{
    int x,a,b,c,d;

printf("Enter your integer value: ");
scanf("%d", &x);

a = x++;
b = ++x;
c = --x;
d = x--;

printf("%d %d %d %d %d", x, a,b,c,d);

return 0;
}
