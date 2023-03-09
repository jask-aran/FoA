#include <stdio.h>

int main(void) {
    int x = 0, y = 0;
    if (y < x) {
        printf("y is smaller\n");
    } else if (y == x) {
        printf("x and y are equal\n");
    } else {
        printf("y is greater\n");
    }
}