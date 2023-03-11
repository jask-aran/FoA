# include <stdio.h>
#include <stdlib.h>

int max_2_ints(int n1, int n2);

int main(void) {
    /* get four integers */
    printf("Enter four integers: ");
    int n1, n2, n3, n4;
    if (scanf("%d %d %d %d", &n1, &n2, &n3, &n4) != 4) {
        // printf("Error in input\n");
        exit(EXIT_FAILURE);
    }

    int max = max_2_ints(n1, n2);
    max = max_2_ints(max, n3);
    max = max_2_ints(max, n4);

    printf("max_4_ints(%d, %d, %d, %d) = %d\n", n1, n2, n3, n4, max);

}

int max_2_ints(int n1, int n2) {
    if (n1 > n2) {
        return n1;
    } else {
        return n2;
    }
}   