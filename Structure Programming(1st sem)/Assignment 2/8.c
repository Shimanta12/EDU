#include <stdio.h>

void max_number_in_an_array(int arr[], int size)
{
    int max = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("The maximum value in the array is %d\n", max);
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
    max_number_in_an_array(arr, n);
    return 0;
}