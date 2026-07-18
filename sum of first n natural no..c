#include <stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    for(i=1; i<=n; i++);
    {
        sum=sum + i;
    }
    printf("Sum of first %d natural numbers=%d\n",n,sum);
    printf("\nCode by Riya , Roll No:28250059");
    return 0;
}
