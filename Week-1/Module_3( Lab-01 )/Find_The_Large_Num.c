#include<stdio.h>
int main ()
{
    int x, y;
    printf("Please enter the 1st number : \n");
    scanf("%d",&x);
    printf("Please enter the 2nd number : \n");
    scanf("%d",&y);
    printf("the numbers are : %d %d  \n" , x , y);
    if(x>y)
    {
         printf("%d is large number", x);
    }
    else
    {
        printf("%d is large number ",y);
    }
    return 0;
}
