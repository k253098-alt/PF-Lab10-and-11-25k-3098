#include <stdio.h>

void copyFile(FILE *source, FILE *destination) {
    char ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }
}

int main() {
    FILE *file1, *file2, *mergedFile;
    char file1Name[100], file2Name[100], mergedFileName[100];

    printf("Enter the first file name: ");
    scanf("%s", file1Name);
    printf("Enter the second file name: ");
    scanf("%s", file2Name);
    printf("Enter the merged file name: ");
    scanf("%s", mergedFileName);

    file1 = fopen(file1Name, "r");
    if (file1 == NULL) {
        printf("Could not open file %s\n", file1Name);
        return 1;
    }

    file2 = fopen(file2Name, "r");
    if (file2 == NULL) {
        printf("Could not open file %s\n", file2Name);
        fclose(file1);
        return 1;
    }

    mergedFile = fopen(mergedFileName, "w");
    if (mergedFile == NULL) {
        printf("Could not create file %s\n", mergedFileName);
        fclose(file1);
        fclose(file2);
        return 1;
    }

    copyFile(file1, mergedFile);
    copyFile(file2, mergedFile);
    printf("Files have been merged into %s\n", mergedFileName);

    fclose(file1);
    fclose(file2);
    fclose(mergedFile);

    return 0;
}
