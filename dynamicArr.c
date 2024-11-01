#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Malloc takes length of the array * size of the data type. and here (int * ) is type conversion
    int *arr = (int *)malloc(5 * sizeof(int));

    // assigning value into the array element
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
    }

    // accessing value of array element
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    // reallowcate array or resize the array
    // It takes pointers of the array, new length of the array * size of the data type.and here (int * ) is type conversion

    arr = (int *)realloc(arr, 10 * sizeof(int));
    return 0;
}