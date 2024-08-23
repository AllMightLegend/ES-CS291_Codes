#include <stdio.h>

unsigned int reverseBits(unsigned int n) {
    unsigned int result = 0;
    for (int i = 0; i < 32; i++) {
        result <<= 1;
        result |= (n & 1);
        n >>= 1;
    }
    return result;
}

int main() {
    unsigned int n = 43261596; // Example number
    printf("Reversed bits: %u\n", reverseBits(n));
    return 0;
}
