#include <stdio.h>
int main()
{
    int arry [5];
    int i;
    for(i=0; i<5; i++)
    {
        printf("please input 5 numbers : ");
        scanf("%d " , &arry[i]);
    }

    for(i=0; i<5; i++){
        printf("%d th position %d \n :" ,i, arry[i]);
    }
}
