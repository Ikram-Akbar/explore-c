#include <stdio.h>
int main(){
 int num, max, min;
 printf ("Enter four numbers: ");
    scanf ("%d", &num);
    max = min = num;
 for (int i = 0; i < 3; i++)
    {
        scanf ("%d", &num);
        if (max < num)
            max = num;
        else if (min > num)
            min = num;
    }
 printf ("The smallest and largest of given four numbers are %d and %d respectively.\n", min,  max);
    return 0;
}

#include <stdio.h>

int main()
{
    int num;
    int num2;
    printf("Enter frist numbers\n");
    scanf("%i", &num);
    printf("Enter second numbers\n");
    scanf("%i", &num2);

    if (num % num2 == 0)
    {
        printf("%i The second number is divisible by the first number %i\n", num, num2);
    }
    else
    {
        printf("%i The second number is not divisible by the first number %i\n", num, num2);
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for (i = 1; i <= n1 && i <= n2; ++i)
    {
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    return 0;
}

#include <stdio.h>

int main()
{

    int n1, n2, i, gcd, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // loop to find the GCD
    for (i = 1; i <= n1 && i <= n2; ++i)
    {

        // check if i is a factor of both integers
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    lcm = (n1 * n2) / gcd;

    printf("The LCM of two numbers %d and %d is %d.", n1, n2, lcm);
    return 0;
}

#include <stdio.h>

int main()
{
    int i, num;

    printf("Enter any number: ");
    scanf("%d", &num);

    printf("All factors of %d are: \n", num);

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}
#include <stdio.h>

int main()
{

    int n, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // 0 and 1 are not prime numbers
    // change flag to 1 for non-prime number
    if (n == 0 || n == 1)
        flag = 1;

    for (i = 2; i <= n / 2; ++i)
    {

        // if n is divisible by i, then n is not prime
        // change flag to 1 for non-prime number
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    // flag is 0 for prime numbers
    if (flag == 0)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);

    return 0;
}