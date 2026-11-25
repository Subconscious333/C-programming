#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source, *destination;
    char sourceFile[100], destFile[100];
    int ch;

    // Get file names from the user
    printf("Enter the source file name: ");
    scanf("%99s", sourceFile);

    printf("Enter the destination file name: ");
    scanf("%99s", destFile);

    // Open the source file in read mode
    source = fopen(sourceFile, "r");
    if (source == NULL) {
        printf("Error: Cannot open source file '%s'\n", sourceFile);
        exit(1);
    }

    // Open the destination file in write mode
    destination = fopen(destFile, "w");
    if (destination == NULL) {
        printf("Error: Cannot create destination file '%s'\n", destFile);
        fclose(source);
        exit(1);
    }

    // Copy contents character by character
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully.\n");

    // Close both files
    fclose(source);
    fclose(destination);

    return 0;
}