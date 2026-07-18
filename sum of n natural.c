#include <stdio.h>

int main()
{
    int n, i, sum = 0;


    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("Sum of first %d natural numbers (using loop) = %d\n", n, sum);

    int formulaSum = (n * (n + 1)) / 2;
    printf("Sum of first %d natural numbers (using formula) = %d\n", n, formulaSum);
    printf("Code by Jiya , Roll No:28250154\n");

    return 0;
}

