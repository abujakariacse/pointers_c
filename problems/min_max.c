#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    int *x = &a, *y = &b, *z = &c;

    int min = *x, max = *x;

    // Find max
    if (*x >= *y && *x >= *z)
    {
        max = *x;
    }
    else if (*y >= *x && *y >= *z)
    {
        max = *y;
    }
    else
    {
        max = *z;
    }

    if (*x <= *y && *x <= *z)
    {
        min = *x;
    }
    else if (*y <= *x && *y <= *z)
    {
        min = *y;
    }
    else
    {
        min = *z;
    }

    printf("%d %d", min, max);

    return 0;
}