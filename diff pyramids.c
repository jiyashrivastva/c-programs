#include <stdio.h>

void halfPyramid(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void invertedHalfPyramid(int n)
{
    int i, j;
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void fullPyramid(int n)
{
    int i, j, space;
    for (i = 1; i <= n; i++)
    {
        for (space = 1; space <= n - i; space++)
        {
            printf("  ");
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void invertedFullPyramid(int n)
{
    int i, j, space;
    for (i = n; i >= 1; i--)
    {
        for (space = 1; space <= n - i; space++)
        {
            printf("  ");
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int n, choice;

    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("\nChoose a pattern:\n");
    printf("1. Half Pyramid\n");
    printf("2. Inverted Half Pyramid\n");
    printf("3. Full Pyramid\n");
    printf("4. Inverted Full Pyramid\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("\n");
     printf("Code by Jiya , Roll No:28250154\n");

    switch (choice)
    {
        case 1: halfPyramid(n); break;
        case 2: invertedHalfPyramid(n); break;
        case 3: fullPyramid(n); break;
        case 4: invertedFullPyramid(n); break;
        default: printf("Invalid choice!\n");
    }

    return 0;
}
