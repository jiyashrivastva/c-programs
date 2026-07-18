#include<stdio.h>
int main()
{
    int a,b;
    printf("enter value of a and b:");
    scanf("%d,%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value of a=%d and b=%d", a,b);
    printf("\nCode by Prarthna , Roll no:28250175");
    return 0;
}
