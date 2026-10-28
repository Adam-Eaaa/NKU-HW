#include <cstdio>

int main() {
    for (auto i = 1; i <= 9; i++) {
        for (auto j = 1; j <= i; j++){
            printf("%d * %d = %d\t", j, i, i * j);
        }
        putchar('\n');
    }
    return 0;
}