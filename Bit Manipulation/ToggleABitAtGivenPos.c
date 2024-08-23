#include <stdio.h>

int toggleBit(int n, int pos) {
    return n ^ (1 << pos);
}

int main() {
    int n = 29; // Binary: 11101
    int pos = 3;
    printf("Number after toggling bit %d: %d\n", pos, toggleBit(n, pos));
    return 0;
}
