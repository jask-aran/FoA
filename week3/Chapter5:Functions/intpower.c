#include <stdio.h>

int main(void) {
    int base = 3, exponent = 4;
    printf("Enter the base and the exponent: ");
    scanf("%d %d", &base, &exponent);

    int result = base;
    for (int i = 1; i < exponent; i++) {
        result = result * base;
    }

    if (exponent == 0) {
        printf("%d^%d = 1\n", base, exponent);
    } else {
        printf("%d^%d = %d\n", base, exponent, result); 
    }   
}
