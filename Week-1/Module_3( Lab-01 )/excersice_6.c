#include<stdio.h>
int main ()
{
    int m ;
    printf("Please enter an input: \n");
    scanf("%d", &m);
    if(m>0)
    {
        printf("n is 1");
    }
    else if(m==0)
    {
        printf("n is 0");
    }
    else
    {
        printf("n is -1");
    }
    return 0;
}
