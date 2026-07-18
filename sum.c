#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        sum += i;   // adding i to sum
    }

    printf("The sum of first %d natural numbers is: %d\n", n, sum);
    printf("\nCode by Riya , Roll No:28250059");
    return 0;
}
