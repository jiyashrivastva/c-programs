#include <stdio.h>
int main()
{
int number, sum=0, digit;
printf("enter a positive integer");
scanf("%d",&number);
while(number!=0);
{
digit=number%10;
sum=sum+digit;
number=number/10;
}
printf("sum=%d",sum);
printf("\nCode by Jiya , Roll No:28250154");
return 0;
}
