#include <stdio.h>
#include <stdlib.h>

int factorial(int n);

int main(void) {
    int n = 5, k=2, c;

    printf("Enter n and k: ");
    if (scanf("%d %d", &n, &k) != 2) {
        // printf("Error in input\n");
        exit(EXIT_FAILURE);
    }

    c = (factorial(n) / (factorial(n-k) * factorial(k)));

    printf("%d choose %d = %d\n", n, k, c);
}

int factorial(int n) {
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}