#include<stdio.h>
int main ()
{
    int n;
    printf("enter the number of chocolate :");
    scanf("%d",&n);
    int chocolate = n;
    int packet = n;
    while(packet >= 4)
    {
        chocolate += (packet/4);
        packet = (packet/4)+(packet%4);
    }
    printf("total chocolate : %d",chocolate);
}
