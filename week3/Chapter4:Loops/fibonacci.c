#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int spore, spore2 = 1, spore3 = 1;

    for (int i = 3; spore < 10000000; i++) {
        spore = spore2 + spore3;
        printf("After %d days, %d spores\n", i, spore);
        spore3 = spore2;
        spore2 = spore;
    }
}
