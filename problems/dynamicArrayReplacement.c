#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allowcation failed");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;

    for (int i = 0; i < n; i++, ptr++)
    {
        if (*ptr < 0)
        {
            *ptr = 2;
        }
        else if (*ptr > 0)
        {
            *ptr = 1;
        }
    }
    ptr = arr;

    for (int i = 0; i < n; i++, ptr++)
    {
        printf("%d ", *ptr);
    }

    free(arr);

    return 0;
}