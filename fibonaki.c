#include <stdio.h>

int main()
{
    int n, i;
    long long first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Sequence: ");

    for (i = 1; i <= n; i++)
    {
        printf("%lld ", first);
        next = first + second;
        first = second;
        second = next;
    }
printf("\n\nCode by Jiya , Roll No:28250154");

    printf("\n");
    return 0;
}
