#include<stdio.h>
int main()
{
    int i, num, sum = 0;
    printf("enter a number : \n");
    scanf("%d",&num);
    for(i=1; i<=num;i++)
    {
        printf("%d \n", i);
        //sum = sum + i;
        sum += i;
    }
    printf(" the sum of :%d ", sum);
    return 0;
}
