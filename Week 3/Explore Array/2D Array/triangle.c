#include <stdio.h>
int main()
{
    int i, j,n;
    printf("write a number : ");
    scanf("%d", &n);
    for(i=0; i<n;i++){
        printf("\n");
        for(j=0; j<i; j++){
            printf("*");
        }
    }
}
