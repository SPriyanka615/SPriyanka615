#include <stdio.h>
#include <stdlib.h>

void inputarray(int arr[], int total_index)
{
    for (int i = 0; i < total_index; i++)
    {
        printf("Enter a positive element at index %d: ", i);
        scanf("%d", &arr[i]);
    }
}

int main()
{
    int size;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));
    inputarray(arr, size);

    int smallest = arr[0], second_smallest = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (smallest > arr[i])
        {
            second_smallest = smallest;
            smallest = arr[i];
        }

        else if (second_smallest > arr[i] && smallest <= arr[i])
        {
            second_smallest = arr[i];
        }
    }

    printf("\nSecond Smallest Element is: %d\n", second_smallest);

    free(arr);
    return 0;
}