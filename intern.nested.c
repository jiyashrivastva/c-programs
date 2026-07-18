#include<stdio.h>
//int main()
//{
//    int row,column;
//    printf("Enter the number of rows:");
//    scanf("%d",&row);
//    printf("Enter the number of columns:");
//    scanf("%d",&column);
//    for(int i=1;i<=row;i+=1)
//    {
//        for(int j=1;j<=column;j+=1)
//        {
//            if(i==1 ||i==row || j==1 || j==column)
//            {
//                 printf(" * ");
//            }
//            else
//            {
//                 printf("   ");
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
//
//int main()
//{
//    int n ;
//    printf("ENTER THE NUMBER :");
//    scanf("%d", &n);
//    for(int i=0 ; i<=n ; i++)
//    {
//        if(i%2==0)
//        {
//            continue;
//        }
//        printf("%d\n",i);
//    }
//    return 0;


//int main ()
//{
//    int a = 10;
//    int *p;
//    p=&a;
//    *p = 20;
//    printf("Address of a : %p", &a);
//    printf("\nValue of p : %p", p);
//    printf("\nAddress of pointer p : %p", &p);
//    printf("\nValue of a : %d",a);
//    printf("\nValue of a via pointer : %d",*p);
//    printf("\nSize of pointer : %zu",sizeof(size_t));
//}

//int main()
//{
//    int a = 10;
//    int *p;
//    p = &a;
//    int **q;
//    q = &p;
//    printf("Value of a : %d",*p);
//    printf("\nValue of a via q : %d",**q);
//    int ***z;
//    z = &q;
//    printf("\nValue of a via z : %d",***z);
//}


//int main()
//{
//    int a = 5;
//    int *p = &a;
//    printf("Address of a : %p", &a);
//    printf("\nCurrent address of p : %p", &p);
//    p=p+1;
//    printf("\nNew address of p : %p",p);
//}


//#include <stdio.h>
//void swap(int,int);   //function prototype
//int main()
//{
//    int a,b;
//    printf("Enter the value of a and b : ");
//    scanf("%d%d",&a,&b);
//    printf("Before Swapping : a=%d b=%d \n", a,b);
//    swap(a,b);                                             // calling function
//}
//
//void swap(int p, int q)
//{
//    int r;
//    r = p;
//    p = q;
//    q = r;
//    printf("After Swapping : a=%d b=%d\n", p,q);
//}


#include<stdio.h>
void swap(int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
    printf("After Swapping : a = %d , b = %d",*p,*q);
}

int main()
{
    int a,b;
    printf("Enter the value of a and b : ");
    scanf("%d%d",&a,&b);
    printf("Before Swapping : a = %d , b = %d \n",a,b);
    swap(&a,&b);
}
