#include <stdio.h>
#include <stdlib.h>
int main()
{
int *arr_malloc, *arr_calloc;
int size, i;
// Demonstrating malloc
printf("Enter the number of elements for malloc: ");
scanf("%d", &size);
// Using malloc to allocate memory for 'size' integers
arr_malloc = (int *)malloc(size * sizeof(int));
if (arr_malloc == NULL) {
printf("Memory allocation failed using malloc.\n");
return 1; // Exit if malloc fails
}
// Input and display values using malloc
printf("Enter %d elements for malloc allocation:\n", size);
for (i = 0; i< size; i++) {
printf("Enter element %d: ", i + 1);
scanf("%d", &arr_malloc[i]);
}
printf("\nElements in the array (using malloc):\n");
for (i = 0; i < size; i++) {
printf("%d ", arr_malloc[i]);
}
printf("\n");
// Demonstrating calloc
printf("\nEnter the number of elements for calloc: ");
scanf("%d", &size);
// Using calloc to allocate memory for 'size' integers and initialize to 0
arr_calloc = (int *)calloc(size, sizeof(int));
if (arr_calloc == NULL) {
printf("Memory allocation failed using calloc.\n");
return 1; // Exit if calloc fails
}
// Display elements allocated by calloc (initialized to 0)
printf("\nElements in the array:\n");
for (i = 0; i < size; i++) {
printf("%d ", arr_calloc[i]);
}
printf("\n");
printf("\nCode by Jiya , Roll No:28250154\n");
// Free allocated memory
free(arr_malloc);
free(arr_calloc);
return 0;
}
