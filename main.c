#include <stdio.h>
#include <stdlib.h>

int main() {
    // Open a file for reading (ASCII text)
    FILE *fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Check the file pointer is valid
    if (fp != NULL) {
        // Read a block of data from the file
        char buffer[1024];
        size_t bytesRead = fread(buffer, 1, 1024, fp);
        printf("Read %zu bytes: '%s'\n", bytesRead, buffer);

        // Close the file
        fclose(fp);
    }

    return 0;
}