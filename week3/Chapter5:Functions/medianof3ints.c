#include <stdio.h>
#include <stdlib.h>

int median_3_ints(int n1, int n2, int n3);

int main(void) {
    /* get three integers */
    printf("Enter three integers: ");
    int n1 = 1, n2 = 100, n3 = 2;
    if (scanf("%d %d %d", &n1, &n2, &n3) != 3) {
        // printf("Error in input\n");
        exit(EXIT_FAILURE);
    }

    int median = median_3_ints(n1, n2, n3);

    printf("median_3_ints(%d, %d, %d) = %d\n", n1, n2, n3, median);

}

int median_3_ints(int n1, int n2, int n3) {
    if ((n1 < n2 && n1 > n3) || (n1 > n2 && n2 < n3)) {
        return n1;
    } else if ((n1 < n2 && n2 < n3) || (n1 > n2 && n2 > n3)) {
        return n2;
    } else {
        return n3;
    }
}   