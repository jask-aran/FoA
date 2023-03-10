#include <stdio.h>

int main(void) {
    int char_count = 0, nl = 0, c, inaword = 0, w=0, wlen;
    printf("Enter text:\n");
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            nl++;
        }

        if ((c == '\n' || c == ' ') && inaword == 0) {
            inaword = 1;
        }

        if (inaword == 1 && (c == '\n' || c == ' ')) {
            inaword = 0;
        } else if (inaword == 1 && (c != '\n' && c != ' ')) {
            inaword = 2;
        } else if (inaword == 2 && (c == '\n' || c == ' ')) {
            w++;
            inaword = 1;
        } 

        char_count++;
    }
    printf("Lines: %6d", nl);
    printf("\nWords: %6d", w);
    printf("\nChars: %6d\n", char_count);
    return 0;
}