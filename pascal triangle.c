#include <stdio.h>
void generatePascalsTriangle(int n)
{
    int arr[n][n];
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                arr[i][j] = 1;
            else
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];

                printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    generatePascalsTriangle(rows);
    printf("Code by Jiya , Roll No:28250154");

    return 0;
}
