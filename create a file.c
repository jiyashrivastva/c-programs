#include <stdio.h>
int main()
{
FILE *file;
char filename[] = "destination.txt"; // The name of the file to create
// Create a new file (if it doesn't exist) or overwrite the file if it exists
file = fopen(filename, "w"); // "w" mode opens the file for writing
if (file == NULL) {
// Check if the file is created successfully
printf("Failed to create the file.\n");
return 1; // Exit the program if file creation fails
}
// Writing to the file
fprintf(file, "Hello, World!\n");
fprintf(file, "This is a test file.\n");
// Close the file after writing
fclose(file);
printf("File '%s' created and data written successfully.\n",filename);
printf("\nCode by Jiya , Roll No:28250154\n");
return 0;
}
