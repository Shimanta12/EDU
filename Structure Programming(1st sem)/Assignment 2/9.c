#include <stdio.h>

void average_of_numbers(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    printf("The average of the given values is %.2f\n", (float)sum / (float)size);
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
    average_of_numbers(arr, n);
    return 0;
}