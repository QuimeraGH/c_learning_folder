#include "../../include/swap_two_ints.h"
#include <stdio.h>

int main() {

    int a = 10;
    int b = 50;

    printf("a: %d, and b: %d\n", a, b);

    int_swapper(&a, &b);

    printf("a: %d, and b: %d\n", a, b);

    return 0;
}
