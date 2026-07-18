#include<stdio.h>
int factorial_recursive(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial_recursive(n - 1);
}
int factorial_non_recursive(int n)
{
    int result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
int main()
{
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    if (number < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }
    int result_recursive = factorial_recursive(number);
    int result_non_recursive = factorial_non_recursive(number);
    printf("Factorial of %d (recursive): %d\n", number, result_recursive);
    printf("Factorial of %d (non-recursive): %d\n", number, result_non_recursive);

     printf("\nCode by Jiya , Roll No:28250154\n");

    return 0;
}
