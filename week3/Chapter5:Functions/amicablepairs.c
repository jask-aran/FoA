#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int sumfactors(int n);

int main(void) {
    int n1 = 284, n2 = 221;

    printf("Enter two integers: ");
    if (scanf("%d %d", &n1, &n2) != 2) {
        exit(EXIT_FAILURE);
    }

    // printf("%d", sumfactors(n2));

    if (sumfactors(n1) == n2 && sumfactors(n2) == n1 && n1 != n2) {
        printf("%d and %d are an amicable pair\n", n1, n2);
    } else {
        printf("%d and %d are not an amicable pair\n", n1, n2);
    }
}

int sumfactors(int n) {
    int facsum = 0;
    for (int divisor = 1; divisor * 2 <= n; divisor++) {
        if (n % divisor == 0) {
            // printf("%d\n", divisor); print each factor found on newline
            facsum += divisor;
        }
    }
    return facsum;
}