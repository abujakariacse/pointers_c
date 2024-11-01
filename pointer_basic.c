#include <stdio.h>

int main()
{
    int a = 5;

    int *b = &a;

    // dereferencing
    int value = *b;

    printf("%d %d", a, value);

    return 0;
}