#include <stdio.h>
int main()
{
    int i, n, k;
    printf("please input the digit : ");
    scanf("%d %d", &n, &k);
    for (i = 0; i < k; i++)
    {
        if (n % 10 == 0)
            n = n / 10;
        else
            n--;
    }
    printf("%d", n);
}