#include<stdio.h>
int main()
{
    int i,j;
    float x, sum, avg;
    for(i=1; i<= 10; i++)
    {
     printf("enter the %d number : ", i);
     sum = 0.0;
     for(j=1; j<=3; j++)
     {

         scanf("%d", &x);
         sum+=x;
     }
     avg = sum/3;
     printf("avg of marks:%f",avg);
     printf(
}}
