#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char system;
    int input;
    double output;

    printf("Enter a temperature: ");
    scanf("%d%c", &input, &system);
    
    if (system == 'C') {
        output = input * (9.0 / 5) + 32;
        printf("The temperature %.1lf%c", (double) input, system);
        printf(" converts to %.1lfF\n", output);
    } else {
        output = (input - 32) * (5.0 / 9);
        printf("The temperature %.1lf%c", (double) input, system);
        printf(" converts to %.1lfC\n", output);
    }

} 