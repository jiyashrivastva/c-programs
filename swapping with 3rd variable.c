#include<stdio.h>
int main()
{
int a,b,c=0;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
printf("\nBefore swapping: a=%d b=%d",a,b);
c=a;
a=b;
b=c;
printf("\nAfter swapping: a=%d b=%d",a,b);
printf("\nCode by Prarthna , Roll No:28250175");
return 0;
}
