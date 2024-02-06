#include<stdio.h>
int main()
{
    int weight;
    printf("Please enter the weight of Melon : \n");
    scanf("%d", &weight);
    if(weight %2 == 0 && weight!= 2)
    {
        printf("possible !");
    }
    else
    {
        printf("impossible !");
    }
    return 0;
}
