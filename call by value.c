#include<stdio.h>
int main()
{
    int nr1, nc1, nr2, nc2;

    // defining rows and columns for matrix
    printf("Enter the number of rows for 1st matrix : ");
    scanf("%d",&nr1);
    printf("Enter the number of columns for 1st matrix : ");
    scanf("%d",&nc1);
    printf("Enter the number of rows for 2nd matrix : ");
    scanf("%d",&nr2);
    printf("Enter the number of columns for 2nd matrix : ");
    scanf("%d",&nc2);

    int a[nr1][nc1], b[nr2][nc2];
    int mul[nr1][nc2];
    // lets input matrix a
    for(int i=0 ; i<nr1 ; i++)
    {
        for(int j=0 ; j<nc1 ; j++)
        {
            printf("a[%d][%d] : ",i,j);
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0 ; i<nr2 ; i++)
    {
        for(int j=0 ; j<nc2 ; j++)
        {
            printf("b[%d][%d] : ",i,j);
            scanf("%d", &b[i][j]);
        }
    }

    //matrix multiplication
    for(int i=0 ; i<nr1 ; i++)
    {
        for(int j=0 ; j<nc2 ; j++)
        {
            mul[i][j]=0;
            for(int k=0 ; k<nr2 ; k++)
            {
                mul[i][j] = mul[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    printf("MULTIPLIED MATRIX : \n");
    for(int i=0 ; i<nr1 ; i++)
    {
        for(int j=0 ; j<nc2 ; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
}
