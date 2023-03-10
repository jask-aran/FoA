#include <stdio.h>
#include <stdlib.h>

int
main(int argc, char *argv[]) {
	int n, divisor, isprime;
	printf("Enter a number n: ");
	if (scanf("%d", &n) != 1) {
		printf("Incorrect input\n");
		exit(EXIT_FAILURE);
	}
	/* a value for n has been read */
	isprime = 1;
	for (divisor=2; divisor*divisor<=n; divisor++) {
		if (n%divisor==0) {
			isprime = 0;
			break;
		}
	}
	if (isprime == 1) {
		printf("%d is a prime number\n", n);
	} else {
		printf("%d = %d * %d\n", n, divisor, n/divisor);
	}
	return 0;
}