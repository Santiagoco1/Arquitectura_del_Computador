#include <stdio.h>
#include <stdlib.h>

typedef struct {
    unsigned short n[16];
} nro;

int is_cero(nro x) {
    for(int i = 0; i < 16; i++) {
        if(x.n[i] != 0) return 0;
    }
    return 1;
}

int is_one(nro x) {
    if(x.n[0] == 1) {
        for(int i = 1; i < 16; i++) {
            if(x.n[i] != 0) return 0;
        }
        return 1;
    } else return 0;
}

int is_even(nro x) {
    return x.n[0] % 2 == 0;
}

int is_odd(nro x) {
    return x.n[0] % 2 != 0;
}

nro right(nro x) {
    x.n[15] = 0;
    for(int i = 0; i < 15; i++) {
        x.n[i] = x.n[i+1];
    }
    return x;
}

nro left(nro x) {
    for(int i = 15; i > 1; i++) {
        x.n[i] = x.n[i-1];
    }
    x.n[0] = 0;
}

int main() {
    return 0;
}