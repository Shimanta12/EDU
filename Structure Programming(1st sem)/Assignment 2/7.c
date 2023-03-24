#include <stdio.h>

void max_value(int a, int b)
{
    if (a > b)
        printf("%d is greater than %d", a, b);
    else
        printf("%d is greater than %d", b, a);
}

int main()
{
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);
    max_value(a, b);
    return 0;
}