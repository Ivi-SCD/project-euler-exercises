#include <stdio.h>

int main() {
    int a, b, c;

    for (a = 1; a <= 1000; a++) {
        for (b = a + 1; b <= 1000; b++) {
            c = 1000 - a - b;

            if (a * a + b * b == c * c) {
                int produto_abc = a * b * c;
                printf("a: %d, b: %d, c: %d\n", a, b, c);
                printf("O produto abc: %d\n", produto_abc);
                return 0;
            }
        }
    }

    return 0;
}

