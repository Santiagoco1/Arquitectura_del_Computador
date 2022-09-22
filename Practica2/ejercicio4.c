#include <stdio.h>
#include <stdlib.h>

void exchange(int *x, int *y) {
    (*y) = (*x) ^ (*y);
    (*x) = (*y) ^ (*x);
    (*y) = (*y) ^ (*x);
}

void params(int *a, int *b, int *c) {
    exchange(a, b);
    exchange(a, c);
}

int main() {
    int a = 1, b = 2, c = 3;
    params(&a, &b, &c);
    printf("A = %d, B = %d, C = %d", a, b, c);
    return 0;
}