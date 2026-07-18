#include<stdio.h>
#include<stdlib.h>
void copyFile(const char *source, const char *destination)
{
FILE *src, *dest;
char buffer[1024]; //Buffer to store file Data
size_t bytesRead;
//Open source file for reading
src = fopen(source,"rb");
if (src == NULL)
{
perror("Error opening source file");
exit(1);
}
//Open destination file for writing (create if it does'nt exist)
dest = fopen(destination, "wb");
if (dest == NULL)
{
perror("Error opening destination file");
fclose (dest);
exit(1);
}
//Copy data from source to destination
while ((bytesRead = fread(buffer, 1, sizeof(buffer),src)) > 0)
{
fwrite(buffer, 1, bytesRead, dest);
}
printf("File copies successfully.\n");
//Close both files
fclose(src);
fclose(dest);
}
int main()
{
char source[256];
const char *destination = "destination";
//Ask user for the source file name
printf("Enter the source file name:");
scanf("%s", source);
//Call the function to copy the file
copyFile (source, destination);
printf("\nCode by Jiya , Roll No:28250154\n");
return 0;
}
