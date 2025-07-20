#include <stdio.h>
int main() {
    FILE *fptr;
    char filename[] = "sample.txt";
    fptr = fopen(filename, "w");
    if (fptr == NULL) {
        printf("Error opening file!");
        return 1;
    }
    fprintf(fptr, "Writing to a file using C!");
    fclose(fptr);
    printf("File written successfully.");
    return 0;
}