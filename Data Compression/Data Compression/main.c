#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
    char str[MAX];
    printf("Enter a string to compress: ");
    fgets(str, MAX, stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character

    char current = str[0];
    int count = 1;

    printf("Compressed string: ");
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] == current) {
            count++;
        } else {
            printf("%c%d", current, count);
            current = str[i];
            count = 1;
        }
    }

    printf("%c%d\n", current, count);

    return 0;
}
