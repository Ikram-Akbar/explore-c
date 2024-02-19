
#include<stdio.h>

int main()
{

    int arr[5],i,sum=0;
    for(i=1; i<=5; i+=1)
    {
        printf("the value of %d \n" , i);
        arr[i-1]=i;
    }
    printf("%d\n",sum);
    for(i=1; i<=5; i+=1)
    {
        sum+=arr[i-1];
    }
    return 0;
}
