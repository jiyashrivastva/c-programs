#include<stdio.h>
int main()
{
    int n,i,j,k,row1,col1,row2,col2;
    int matA[10][10], matB[10][10], prodmat[10][10];
    printf("Enter the order of the matrixA\n");
    scanf("%d*%d", &row1,&col1);
    printf("Enter the order of the matrixB\n");
    scanf("%d*%d",&row2,&col2);
    if(col1 == row2)
    {
        printf("Enter the elements of the matrix A\n");
        for(i=0; i<row1; i++)
        {
            for(j=0;j<col1;j++)
            {
                scanf("%d", &matA[i][j]);
            }
        }
        printf("Enter the elements of the matrix B\n");
        for(i=0; i<row2; i++)
        {
            for(j=0;j<col2; j++)
            {
                scanf("%d", &matB[i][j]);
            }
        }
       /*Computation of product of two matrices*/
       for(i=0; i<row1; i++)
        {
            for(j=0;j<col2;j++)
            {
                prodmat[i][j]=0;
                for(k=0; k<row2; k++)
                {
                prodmat[i][j]=prodmat[i][j]+(matA[i][k]*matB[k][j]);
                }
            }
        }
        printf("Product matrix is.......\n");
        for(i=0; i<row1; i++)
        {
            for(j=0;j<col2;j++)
            {
                 printf("%d",prodmat[i]  [j]);
            }
        printf("\n");
        }
    }
    else
    printf("Multiplication not possible\n");
}
