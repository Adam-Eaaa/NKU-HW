#include <cstdio>
#include <cctype>

int main() {
    char buf[1024];

    if (fgets(buf, sizeof(buf), stdin) == NULL)
        return 1;

    int count = 0;

    for (const char *p = buf; *p != '\0'; ++p) {
        if (isdigit((unsigned char)*p)) {
            count += 1;
        }
    }

    printf("%d", count);
    return 0;
}