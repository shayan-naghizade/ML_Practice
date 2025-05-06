#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;
    int **q = &p;

    **q = **q + 5;

    printf("x = %d\n", x);
    return 0;
}
