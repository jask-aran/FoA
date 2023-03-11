#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main(void) {
    int base = 2, exponent = 32;
    printf("Enter the base and the exponent: ");
    scanf("%d %d", &base, &exponent);

    if (exponent == 0) {
        printf("%d^%d = 1\n", base, exponent);
    } else {
        int running = base;

        for (int i = 1; i < exponent; i++) {

            if (running * base <= 0) {
                printf("Error: Integer overflow when attempting multiplication\n");
                exit(EXIT_FAILURE);
            } else {
                running = running * base;
            }          
        }
        printf("%d^%d = %d\n", base, exponent, running); 
        // printf("%d", INT_MAX);
    }  
}
