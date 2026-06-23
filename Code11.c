//The Sequential Rollercoaster
/*Description: Write a program that reads one integer x. Perform exactly four operations in this exact order, printing the value of x after each operation on a new line:

1) Post-increment (x++)
2) Pre-increment (++x)
3) Post-decrement (x--)
4) Pre-decrement (--x)
*/

#include <stdio.h>

int main() {
    int x;

    printf("Enter the integer: "); //take an example of integer 5
    scanf("%d", &x);

    // Operation 1: Post-increment (x++)
    x++;                    // x becomes 6
    printf("%d\n", x);      // Prints 6

    // Operation 2: Pre-increment (++x)
    ++x;                    // x becomes 7
    printf("%d\n", x);      // Prints 7

    // Operation 3: Post-decrement (x--)
    x--;                    // x becomes 6
    printf("%d\n", x);      // Prints 6

    // Operation 4: Pre-decrement (--x)
    --x;                    // x becomes 5
    printf("%d\n", x);      // Prints 5

    return 0;
}
