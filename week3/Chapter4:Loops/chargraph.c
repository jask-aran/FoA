#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int c;
	printf("Enter numbers: ");

	while (scanf("%d", &c) == 1) {
        printf("%2d |", c);
        for (int i = 1; i <= c; i++) {
            printf("*");
        }
        printf("\n");
	}
	return 0;
}