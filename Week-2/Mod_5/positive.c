#include <stdio.h>
int main()
{
    int n, i;
    printf("write a integer:");
    scanf("%d", &n);

    if (n > 1)
    {
        for (i = 1; i <= n; i++)
        {
            printf("%d\n", i);
        }
    }
    else
    {
        for (i = 1; i >= n; i--)
        {
            printf("%d\n", i);
        }
    }
}
