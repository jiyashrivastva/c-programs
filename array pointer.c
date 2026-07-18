#include <stdio.h>
int main()
{
int arr[] = {11, 21, 31, 41, 51}; // Declare and initialize an array
int *ptr; // Declare a pointer to int
// Point the pointer to the first element of the array
ptr = arr;
printf("Array elements using pointers: \n");
// Use a loop to print all elements using the pointer
for (int i = 0; i < 5; i++) {
printf("%d ", *(ptr + i)); // Access the element using pointer arithmetic
}
printf("\n");
printf("\nCode by Jiya , Roll No:28250154\n");
return 0;
}
