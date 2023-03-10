#include <stdio.h>

int isprime(int n);
int nextprime(int n);

int main(void) {
    int n = 3, prime;
    printf("Enter an integer value: ");
    scanf("%d", &n);
    prime = nextprime(n);
    printf("The next prime is     : %d\n", prime);


}

int isprime(int n) {
    int divisor;

    if (n < 2) {
        return 0;
    }

    for (divisor = 2; divisor * divisor <= n; divisor++) { // Only need to consider factors up to sqrt of n
        if (n % divisor == 0) {
            return 0; // Factor of n found, therefore n cannot be prime
        }
    }

    return 1; // Only returns if no factors are found, and therefore n is prime
}

int nextprime(int n) {
    n++;

    while (!isprime(n)) {
        n++;
    }

    return n;
}