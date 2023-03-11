#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int sumfactors(int n);
int isperfect(int n);
int nextperfect(int n);

int main(void) {
    int n = 100;

    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        exit(EXIT_FAILURE);
    }

    if (isperfect(n)) {
        printf("%d is a perfect number\n", n);
    } else {
        printf("%d is not a perfect number\n", n);
    
    }
    printf("The next perfect is %d\n", nextperfect(n));
    // printf("%d", sumfactors(n));
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

int isperfect(int n) {
    if (n == sumfactors(n)) {
        return 1;
    } else {
        return 0;
    }
}

int nextperfect(int n) {
    for (int i = n+1; i <= INT_MAX-2; i++) {
        if (isperfect(i)) {
            return i;
        } 
    }
    printf("No perfect found");
    exit(EXIT_FAILURE);
}