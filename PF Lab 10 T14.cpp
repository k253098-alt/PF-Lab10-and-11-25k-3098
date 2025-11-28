#include <stdio.h>
#include <time.h>

int main() {
    FILE *file;
    time_t t;
    struct tm *tm_info;
    char timeStr[100];
    time(&t);
    tm_info = localtime(&t);
    strftime(timeStr, sizeof(timeStr), "%Y-%m-%d %H:%M:%S", tm_info);

    file = fopen("log.txt", "a");
    if (file == NULL) {
        printf("Could not open log.txt\n");
        return 1;
    }
    fprintf(file, "Program run at: %s\n", timeStr);

    fclose(file);
    printf("Timestamp added to log.txt: %s\n", timeStr);

    return 0;
}
