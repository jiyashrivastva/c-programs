#include<stdio.h>
int main()
{
    int i=1;
    while(i<=10)
    {
        printf("i=%d\n",i);
        i=i+1;
    }
}

// for loop
// for(initialisation; condition; increment/decrement)

#include<stdio.h>
int main()
{
    for(int i=1; i<=10; i++)
    {
        printf("i=%d\n",i);
    }

}

#include<stdio.h>
int main()
{
    int i=1;
    for(;i<=10;)
    {
        printf("%d\n",i);
        i=i+1;
    }
}

#include<stdio.h>
int main()
{
    int num, count=0, search;
    printf("Enter a positive integer:");
    scanf("%d",&num);  //num=75625
    printf("Enter the digit to count its appearance:");
    scanf("%d",&search);   //search=5
    int num1=num;
    while(num>0)
    {
        int r = num%10; //r=5
        if(r==search)
        {
            count+=1;
        }
        num=num/10;
    }
    printf("Occurance of %d in %d is %d",search,num1,count);
}
