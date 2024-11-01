#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int *x = &a, *y = &b;

    int *temp = x;

    x = y;
    y = temp;

    printf("%d %d", *x, *y);

    return 0;
}