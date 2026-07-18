#include<stdio.h>
void transpose(int rows, int cols, int matrix[rows][cols], int result[cols][rows])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[j][i] = matrix[i][j];
        }
    }
}
int main()
{
    int matrix[2][3] ={{1, 2, 3},{4, 5, 6}};
    int result[3][2];
    transpose(2, 3, matrix, result);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    printf("\nCode by Jiya , Roll No:28250154\n");
    return 0;
}
