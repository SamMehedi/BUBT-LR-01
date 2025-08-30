#include <stdio.h>
int main()
{
    int s, m;

    printf("Mehedi Enter two Numbers: ");
    scanf("%d %d", &s, &m);

    if (s > m)
        printf("%d is maximum\n", s);
    else
        printf("%d is maximum\n", m);

    return 0;
}

