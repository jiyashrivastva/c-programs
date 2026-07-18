#include<stdio.h>
union Data
{
    int i;
    float f;
char str[20];
};
int main()
{
    union Data data;
    printf("Memory size occupied by char : %lu bytes\n", sizeof(char));
    printf("Memory size occupied by int : %lu bytes\n", sizeof(data.i));
    printf("Memory size occupied by float : %lu bytes\n", sizeof(data.f));
    printf("Size of union Data : %lu bytes\n", sizeof(union Data));
    printf("Memory size occupied by data : %lu bytes\n", sizeof(data));
    data.i = 10;
    printf("data.i : %d\n", data.i);
    data.f = 220.5;
    printf("data.f : %.2f\n", data.f);
    snprintf(data.str, sizeof(data.str), "Hello, World!");
    printf("data.str : %s\n", data.str);
    printf("\nCode by Jiya , Roll No:28250154\n");
    return 0;
}
