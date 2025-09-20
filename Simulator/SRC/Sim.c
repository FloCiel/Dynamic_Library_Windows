#include <stdio.h>
#include "Comp.h"

int main() {
    int a = 10;
    int b = 20;
    int c = add(a, b);

    printf("결과 값: %d\n", c);

    return 0;
}