#include <stdio.h>
#include <stdbool.h>

bool isPowerOfTwo(unsigned int n) {
    return n && !(n & (n - 1));
}

int main() {
    unsigned int n = 16;
    if (isPowerOfTwo(n))
        printf("%u is a power of two\n", n);
    else
        printf("%u is not a power of two\n", n);
    return 0;
}
