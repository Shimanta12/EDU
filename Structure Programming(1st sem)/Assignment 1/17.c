#include <stdio.h>

int main()
{
    int i, num;
    scanf("%d", &num);
    for (i = 0; i <= num; i++)
    {
        if ((i % 2) == 0)
            continue;
        printf("%d ", i);
    }
    return 0;
}