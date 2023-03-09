#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double celcius;
    int fahrenheit;

    printf("Enter degrees F: ");
    if (scanf("%d", &fahrenheit) == 1 &&  fahrenheit > 0) {
        celcius = (fahrenheit - 32) * (5.0 / 9);
        printf("In degrees C is: %.1lf\n", celcius);
    } else {
        printf("Error in input\n");
    }
} 