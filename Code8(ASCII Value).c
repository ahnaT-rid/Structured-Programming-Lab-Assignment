//Character to ASCII with Validation

#include <stdio.h>

#define OFFSET 0

int main() {
    const int MAX_ASCII = 127;
    char ch;
    int ascii_value;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    ascii_value = ch + OFFSET;
    printf("Character '%c' has ASCII = %d\n", ch, ascii_value);
    printf("(Max possible ASCII is %d)\n", MAX_ASCII);
    return 0;
}
