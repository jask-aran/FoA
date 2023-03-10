#include <stdio.h>

int main(void) {
    int nmax, cyclemax = 0, valmax = 1, seed=1;

    printf("Enter value for nmax: ");
    scanf("%d", &nmax);
    
    for (int i = 1; i <= nmax; i++) {
        int max = i;
        int n = i;
        int cycles = 0;


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

        if (cycles > cyclemax) {
            cyclemax = cycles;
            valmax = max;
            seed = i;
        }
    }
    printf("start = %7d, cycles = %5d, max = %10d\n", seed, cyclemax, valmax);
}
