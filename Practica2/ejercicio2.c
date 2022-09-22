#include <stdio.h>
#include <stdlib.h>

int is_one(long n, int b) {
    return ((unsigned int)n >> b) & 1;
}

int main() {
    printf("%d", is_one(2,0));
    return 0;
}