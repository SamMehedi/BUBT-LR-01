#include <stdio.h>

int main()
{
    int s, a, m;

    printf("Mehedi Enter three Numbers: ");
    scanf("%d %d %d", &s, &a, &m);

    if (s > a && s > m)
        printf("%d is maximum\n", s);
    else if (a > m)
        printf("%d is maximum\n", a);
    else
        printf("%d is maximum\n", m);

    return 0;
}
