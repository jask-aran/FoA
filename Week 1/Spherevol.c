#include <stdio.h>
#define PI 3.14159

int main(void) {
    double radius, volume;
    
    printf("Enter sphere radius: ");
	scanf("%lf", &radius);
    volume = (4.0 * PI * radius * radius * radius) / 3.0;
    printf("Volume is %.2f cubic meters \n", volume);
    return 0;
}