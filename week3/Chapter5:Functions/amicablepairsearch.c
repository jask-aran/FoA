#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/* sum the factors of the argument */
int sumfactors(int n);

/* determine whether n1 and n2 form an amicable pair */
int amicable_pair(int n1, int n2);


int main(void) {
    int n = 568, n1, n2;

    // printf("Enter a number n: ");
    // if (scanf("%d %d", &n) != 1) {
    //     exit(EXIT_FAILURE);
    // }

    printf("%d", sumfactors(n));

}

int
sumfactors(int n) {
	int i, sum=1;
	/* the sum already includes the first factor */
	for (i=2; i*i<n; i++) {
		/* the loop is much more efficient if stopped at sqrt(n) */
		if (n%i==0) {
			/* found a factor */
			sum += i;
			/* and get two for the price of one */
			sum += (n/i);
		}
	}
	/* one more thing to check, that last value of i */
	if (i*i==n) {
		/* yes, n is a square, and has one more factor */
		sum += i;
	}
	return sum;
}

/* determine whether n1 and n2 form an amicable pair */
int
amicable_pair(int n1, int n2) {
	return (sumfactors(n1)==n2 && sumfactors(n2)==n1 && n1!=n2);
}