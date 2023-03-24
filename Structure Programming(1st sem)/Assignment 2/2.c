#include <stdio.h>

void add()
{
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);
    printf("Addition of the two numbers is %d\n", a + b);
}

int main()
{
    add();
    return 0;
}