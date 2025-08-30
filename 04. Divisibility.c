#include <stdio.h>

int main()
{
    int num, divisor;

    printf(" Mehedi Enter number and divisor: ");
    scanf("%d %d", &num, &divisor);

    if (num % divisor == 0)
        printf("%d is divisible by %d\n", num, divisor);
    else
        printf("%d is not divisible by %d\n", num, divisor);

    return 0;
}
