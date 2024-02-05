#include <stdio.h>
int main()
{
    int first_number, second_number, third_number;
    printf("enter the first number : \n");
    scanf("%d", &first_number);
    printf("enter the second number : \n");
    scanf("%d", &second_number);
    printf("enter the third number : \n");
    scanf("%d", &third_number);
    if (first_number > second_number)
    {
        printf("First Number is Largest Number.");
    }
    else
    {
        if (first_number == second_number)
        {
            printf("Both are equal to each other.");
        }
        else
        {
            printf("Second Number is Large Number.");
        }
    }
    return 0;
}
