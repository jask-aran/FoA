#include <stdio.h>

int main(void) {
    int char_count = 0, nl = 0, c;
    printf("Enter text:\n");
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            nl++;
        }
        ++char_count;

    }
    printf("Lines: %6d", nl);
    printf("\nChars: %6d\n", char_count);
    return 0;
}