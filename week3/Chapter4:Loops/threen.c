#include <stdio.h>
#include <stdlib.h>

#define PERLINE 8

int
main(int argc, char *argv[]) {

	int n = 3;
    int cycles, max;
	
	max = n; // max initialises as starting value
	cycles = 0;
	while (n>1) {
		if (n%2==0) { // if n is even
			n = n/2;
		} else { // if n is not even
			n = 3*n+1;
		}

		if (n>max) {
			max = n;
		}
		cycles += 1;
	}
	printf("%d cycles consumed, maximum was %d\n", cycles, max);
}
