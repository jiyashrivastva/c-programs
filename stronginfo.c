#include<stdio.h>
struct Student
{
    char name[50];
    int age;
    float marks;
};
int main()
{
    struct Student student1;

    printf("Enter name: ");
    fgets(student1.name, sizeof(student1.name), stdin);

    printf("Enter age: ");
    scanf("%d", &student1.age);

    printf("Enter marks: ");
    scanf("%f", &student1.marks);

    printf("\nStudent Details:\n");
    printf("Name: %s", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Marks: %.2f\n", student1.marks);
    printf("\nCode by Jiya , Roll No:28250154\n");

    return 0;
}
