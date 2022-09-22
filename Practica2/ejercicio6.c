#include <stdio.h>
#include <stdlib.h>

int pos(unsigned n, int b) {
    return ((unsigned int)n >> b) & 1;
}

int is_cero(unsigned n) {
    int y = 1;
    for(int i = 0; i < 32; i++){
        y = y & !pos(n, i);
    }
    return y;
}

int is_one(unsigned n) {
    int y = 1;
    if(pos(n, 0)) {
        n = n >> 1;
        return is_cero(n);
    }
    return 0;
}

int is_even(unsigned n) {
    return !pos(n, 0);
}

int is_odd(unsigned n) {
    return pos(n, 0);
}

unsigned mult(unsigned a, unsigned b) {
    if(is_cero(b)) return 0;
    if(is_one(b)) return a;
    if(is_even(b)) return mult(a + a, b / 2);
    if(is_odd(b)) return mult(a + a, (b-1) / 2) + a;
}

int main() {
    printf("%d\n", mult(3, 5));
    return 0;
}