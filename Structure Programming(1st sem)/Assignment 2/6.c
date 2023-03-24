#include <stdio.h>

void greet(char str[])
{
    printf("Hello %s !\n", str);
}

int main()
{
    char name[50];
    printf("Enter your name: ");
    gets(name);
    greet(name);
    return 0;
}