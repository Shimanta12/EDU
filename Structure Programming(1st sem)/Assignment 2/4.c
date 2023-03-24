#include <stdio.h>

void even_or_odd()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 2)
        printf("Odd.\n");
    else
        printf("Even.\n");
}

int main()
{
    even_or_odd();
    return 0;
}