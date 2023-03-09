#include <stdio.h>
#include <limits.h>
#include <float.h>

/*The system header file limits.h defines constants INT_MAX, INT_MIN, 
representing the largest and smallest values an int can store.
Similar constants are defined within float.h for float and double types: 
FLT_MAX, FLT_MIN, DBL_MAX, and DBL_MIN.
*/

int main(void) {
    printf("ints    : %13d to %13d\n", INT_MIN, INT_MAX);
    printf("floats  : %13e to %13e\n", FLT_MIN, FLT_MAX);
    printf("doubles : %13e to %13e\n", DBL_MIN, DBL_MAX);
}