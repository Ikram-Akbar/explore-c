// Write a C program to compute the sum of the first 10 natural number.
#include<stdio.h>
int main()
{
    int i ,n, sum =0;
    printf("Please Input a number : \n");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        sum+= i;
    }
    printf("sum of : %d", sum);
    return 0;
}
