#include <stdio.h>

int main(void) {
    double pounds, kilograms;

    printf("Enter a weight in pounds: ");
    scanf("%lf", &pounds);
    kilograms = 2.2046 * pounds;
    printf("This is %f kilograms.\n", kilograms);
    return 0;
}