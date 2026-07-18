#include <stdio.h>
int main()
{
FILE *sourceFile, *destinationFile;
char buffer[1024]; // Buffer to hold data while reading
size_t bytesRead;
char sourceFileName[] = "source.txt";
char destinationFileName[] = "destination.txt";
sourceFile = fopen(sourceFileName, "rb"); // Open source in binary mode
if (sourceFile == NULL) {
printf("Failed to open the source file.\n");
return 1;
}
destinationFile = fopen(destinationFileName, "wb"); // Open destination in binary mode
if (destinationFile == NULL) {
printf("Failed to open the destination file.\n");
fclose(sourceFile);
return 1;
}
// Read the source file in chunks and write to the destination file
while ((bytesRead = fread(buffer, 1, sizeof(buffer), sourceFile)) >
0) {
fwrite(buffer, 1, bytesRead, destinationFile);
}
printf("File copied successfully from '%s' to '%s'.\n",
sourceFileName, destinationFileName);
printf("\nCode by Jiya , Roll No:28250154\n");
return 0;
}
