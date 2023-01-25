#include <stdio.h>
int main()
{
    int N = 5;
    int newArray[N];
    int i;
    int maxNum = newArray[0];
    for(i=0; i<N; i++)
    {
        scanf("%d", &newArray[i]);
    }
    for(i=0; i<N; i++)
    {
        if(newArray[i]> maxNum)
        {
            maxNum = newArray[i];
        }

    }
    printf("Max Num is %d", maxNum);
    return 0;
}
