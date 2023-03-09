#include <stdio.h>

int main(void) {
    int cents;
    printf("Enter amount in cents: ");
    // cents = 67;
    scanf("%d", &cents);
    printf("The coins required to make %d cents are:\n", cents);

    while (cents > 0) {
        if (cents >= 50) {
            printf("give a 50c coin\n");
            cents -= 50;
        } else if (cents >= 20) {
            printf("give a 20c coin\n");
            cents -= 20;
        } else if (cents >= 10) {
            printf("give a 10c coin\n");
            cents -= 10;
        } else if (cents >= 5) {
            printf("give a  5c coin\n");
            cents -= 5;
        } else if (cents >= 2) {
            printf("give a  2c coin\n");
            cents -= 2;
        } else if (cents >= 1) {
            printf("give a  1c coin");
            cents -= 1;
        }
    }
    printf("amount remaining: %dc\n", cents);
}