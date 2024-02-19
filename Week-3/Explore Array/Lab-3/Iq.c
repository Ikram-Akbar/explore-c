#include <stdio.h>
int main()
{
    int boxArray[105];
    int evenCounter = 0;
    int oddCounter = 0;
    int result;
    int i, n;

    for ( i = 1; i <=n ; i++)
    {
        printf("select the number of array element : \n");
        scanf("%d", &n);
    }
    
    for (i = 1; i <= n; i++)
    {
        printf(" input the array element - max: 105 digit \n");
        scanf("%d", &boxArray[i]);
    }
    for (i = 1; i <= n; i++)
    {
        if ((boxArray[i] % 2 == 0))
        {
            evenCounter++;
        }
        else
        {
            oddCounter++;
        }
    }
    printf("evens Counter = %d , odds counter = %d", evenCounter, oddCounter);
    return 0;
}