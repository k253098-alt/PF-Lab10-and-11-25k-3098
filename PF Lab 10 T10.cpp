#include <stdio.h>
#include <string.h>

int main() {
    int n, m;
    printf("Enter the number of words and max characters per word: ");
    scanf("%d %d", &n, &m);

    char str[n][m + 1]; 

    printf("Enter the words:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }

    for (int i = 0; i < n; i++) {
        int len = strlen(str[i]);
        int palindrome = 1; 
        for (int j = 0; j < len / 2; j++) {
            if (str[i][j] != str[i][len - j - 1]) {
                palindrome = 0; 
                break;
            }
        }

        if (palindrome)
            printf("%s: Palindrome\n", str[i]);
        else
            printf("%s: Not Palindrome\n", str[i]);
    }

    return 0;
}
