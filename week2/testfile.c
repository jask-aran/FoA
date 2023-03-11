#include <stdio.h>

int main(void) {
    for (int i=0; i<8; i++) {
        for (int j=i+1; j<8; j+=3) {
            printf("i=%d, j=%d\n", i, j);
        }
    }   
}
