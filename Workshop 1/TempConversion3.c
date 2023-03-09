#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>

/* Use F for Fahrenheit, C for Celsius (as before), M for miles, 
K for kilometers, P for pounds, and G for kilograms (not grams).
One mile is 1.609 kilometers, and one pound is 0.454 kilograms.
*/

// Hello this is my comment
int main(void) {
    char system;
    int input;
    double output;

    printf("Enter a quantity: ");
    scanf("%d%c", &input, &system);
    
    if (system == 'C') {
        output = input * (9.0 / 5) + 32;
        printf("The temperature %.1lf%c", (double) input, system);
        printf(" converts to %.1lfF\n", output);
    } else if (system == 'F') {
        output = (input - 32) * (5.0 / 9);
        printf("The temperature %.1lf%c", (double) input, system);
        printf(" converts to %.1lfC\n", output);
    } else if (system == 'M') {
        output = 1.609 * input;
        printf("The distance %.1lf miles", (double) input);
        printf(" converts to %.1lf kilometers\n", output);
    } else if (system == 'K') {
        output = input / 1.609;
        printf("The distance %.1lf kilometers", (double) input);
        printf(" converts to %.1lf miles\n", output);
    } else if (system == 'P') {
        output = 0.454 * input;
        printf("The mass %.1lf pounds", (double) input);
        printf(" converts to %.1lf kilograms\n", output);
    }  else if (system == 'G') {
        output = (1 / 0.454) * input;
        printf("The mass %.1lf kilograms", (double) input);
        printf(" converts to %.1lf pounds\n", output);
    };
} 
