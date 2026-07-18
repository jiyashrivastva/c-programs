#include <stdio.h>
int main()
{
    int n,sum=0,i;
    printf("Enter the positive integer:");
    scanf("%d",&n);
    for(i=1;i<=n;i++);
    {
        sum+=i;
    }
    printf("sum of first %d natural numbers is:%d",n,sum);
    printf("\nCode by Riya , Roll No:28250059");
return 0;
}
