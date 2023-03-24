#include <stdio.h>

void multiply()
{
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);
    printf("Multiplication of the two numbers is %d\n", a * b);
}

int main()
{
    multiply();
    return 0;
}