#include <stdio.h>
#include <math.h>
#include <stdlib.h>             

int main(void) {
    int a,b,c;

    printf("Enter a b c: ");
    // a = 0, b = 0, c = 0;
    // printf("\n");
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        printf("Error in input\n");
		exit(EXIT_FAILURE);
    } 
    
    printf("Equation %.1lfx^2 + %.1lfx + %.1lf = 0 has\n", (double) a, (double) b, (double) c);
    int d = b * b - 4 * a * c;
    double root, root2;

    if (d < 0) {
        printf("    no real roots\n");
    } else if (a == 0 && b == 0 && c == 0) {
        printf("    an infinite number of roots\n");
    } else if (d == 0) {
        root = (-b + sqrt(d)) / (2 * a);
        printf("    one real root: x = %.1lf\n", root);
    } else if (d > 0) {
        root = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);
        printf("    two real roots: x1 = %.1lf, x2 = %.1lf\n", root, root2);
    }

    // printf("\n%d\n", d);
    // printf("a is %d, b is %d, c is %d\n", a,b,c);
}