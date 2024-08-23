#include <stdio.h>

int countSetBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    int n = 29; // Example number
    printf("Number of 1 bits in %d is %d\n", n, countSetBits(n));
    return 0;
}
