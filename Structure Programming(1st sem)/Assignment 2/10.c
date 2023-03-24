#include <stdio.h>

void min_number_in_an_array(int arr[], int size)
{
    int min = __INT_MAX__;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("The minimum value in the array is %d\n", min);
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at index %d arr[%d]= ", i, i);
        scanf("%d", &arr[i]);
    }
    min_number_in_an_array(arr, n);
    return 0;
}