#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, discriminant, root1, root2, realPart, imagPart;
     printf("Enter coefficient of a : ");
    scanf("%f", &a);
    printf("Enter coefficient of b : ");
    scanf("%f", &b);
    printf("Enter coefficient of c : ");
    scanf("%f", &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root1 = %.2f , Root2 = %.2f\n", root1, root2);
    }

    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and equal.\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    }

    else
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root1 = %.2f + %.2fi\nRoot2 = %.2f - %.2fi\n",
               realPart, imagPart, realPart, imagPart);
               printf("\nCode by Jiya , Roll No:28250154");
    }
    return 0;
}
