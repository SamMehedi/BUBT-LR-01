#include <stdio.h>

int main() {
    char ch;

    printf("Mehedi Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("%c is uppercase\n", ch);
    else if (ch >= 'a' && ch <= 'z')
        printf("%c is lowercase\n", ch);
    else
        printf("%c is not an alphabet\n", ch);

    return 0;
}
