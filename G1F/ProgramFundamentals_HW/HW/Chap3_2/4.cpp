#include <cstdio>

typedef unsigned int uint32;

int main() {
    uint32 p;
    scanf("%u", &p);
    if (p <= 1 || (p > 2 && !(p & 1))) {
        printf("%u is not a prime.", p);
        return 0;
    }
    for (uint32 i = 3; i * i <= p; i++) {
        if (!(p % i)) {
            printf("%u is not a prime.", p);
            return 0;
        }
    }
    printf("%u is a prime.", p);
    return 0;
}