#include <stdio.h>

int main()
{
    int a = 5;

    // pointer
    int *x = &a;

    // poniter of pointer x
    int **y = &x;

    printf("%d %d", &x, y);
    return 0;
}