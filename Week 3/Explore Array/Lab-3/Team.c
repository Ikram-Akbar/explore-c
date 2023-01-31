#include <stdio.h>
int main()
{
    int i, j, n, a, b, counter;
    int solve = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        counter = 0;
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a);
            counter += a;
        }
        if (counter >= 2)
        {
            solve += 1;
        }
    };
    printf("%d  ", solve);
}