#include<stdio.h>
int main()
{
    // take input from user :
    int frist_number;
    int second_number;
    int diff;
    scanf("%d%d", &frist_number, &second_number);
    diff = frist_number - second_number;
    printf("the numbers are %d %d  ", frist_number , second_number);
    printf("\n the difference of two numbers are : %d", diff);
    return 0;
}
