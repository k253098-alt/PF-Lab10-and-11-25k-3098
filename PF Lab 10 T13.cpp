#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    
    file = fopen("data.txt", "w");
    if (file == NULL) {
        printf("Could not open file data.txt\n");
        return 1;
    }
    fclose(file);
    printf("Contents of data.txt have been deleted.\n");
    file = fopen("data.txt", "r");
    if (file == NULL) {
        printf("Could not open file data.txt for reading.\n");
        return 1;
    }
    ch = fgetc(file);
    if (ch == EOF) {
        printf("File is empty. Confirmation successful.\n");
    } else {
        printf("File is not empty.\n");
    }

    fclose(file);
    return 0;
}
