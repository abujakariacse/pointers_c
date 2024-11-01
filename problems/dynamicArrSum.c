#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long sum = 0;

    int *arr = (int *)malloc(100000 * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;
    for (int i = 0; i < n; i++, ptr++)
    {
        sum += *ptr;
    }

    free(arr);

    long long result = llabs(sum);

    printf("%lld", result);

    return 0;
}