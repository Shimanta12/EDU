#include <stdio.h>

void multiplication_table()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Multiplication table of %d:\n", a);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", a, i, a * i);
    }
}

int main()
{
    multiplication_table();
    return 0;
}