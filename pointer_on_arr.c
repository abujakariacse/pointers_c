#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    // It will hold just first indexed address by default
    int *add = arr;
    // we can perform arithmatic operation on pointer
    // printf("%d %d", arr, ++add);

    char x = 'a';

    char *y = &x;

    printf("%c %c", x, x + 2);
    return 0;
}