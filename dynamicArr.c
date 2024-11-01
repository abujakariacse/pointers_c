#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Malloc takes length of the array * size of the data type. and here (int * ) is type conversion
    int *arr = (int *)malloc(5 * sizeof(int));

    // We can use calloc that will initialized all values as 0.
    //  int *arr = (int *)calloc(5, sizeof(int));

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
    printf("\n");

    // storing the pointer to ignore losing issue
    int *temp = arr;

    // reallowcate array or resize the array
    // It takes pointers of the array, new length of the array * size of the data type.and here (int * ) is type conversion

    arr = (int *)realloc(arr, 10 * sizeof(int));

    // If realloc return NULL for any reallowcation error the address will be the previous address.
    if (arr == NULL)
    {
        arr = temp;
    }

    // assign value to the new array indexs
    for (int i = 5; i < 10; i++)
    {
        arr[i] = i + 1;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    // Deallowcate the array

    free(arr);
    return 0;
}