#include <stdio.h>
int main()
{
    int N,x;
    int arra [10001];
    int i;
    scanf("%d ", &N);
    for(i=1; i<N; i++)
    {
        scanf("%d", &x);
        arra[x] = 1;
    }
    for(i=1; i<=N;i++){
        printf(" testing %d position \n ", i);
        if(arra[i]==0){
            printf("%d \n",i);
            break;
        }
    }
}
