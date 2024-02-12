#include <stdio.h>
int main()
{
    int i, sum = 0, w, n;
    printf("enter the number of Passenger : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &w);
        sum += w;
    }
    printf("Total weight of passengers : %d", sum);
    return 0;
}
