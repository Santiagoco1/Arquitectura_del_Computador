#include <stdio.h>
#include <stdlib.h>

void printbin(unsigned long n) {
    for(int i = 31; i >= 0; i--) {
        printf("%d", (unsigned int) n & 1);
    }
}

int main() {
    printbin(32);
    return 0;
}