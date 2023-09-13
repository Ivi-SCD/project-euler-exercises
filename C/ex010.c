#include <stdio.h>
#include <stdbool.h>

#define LIMIT 2000000

int main() {

    unsigned long long soma = 0;
    bool ehPrimo[LIMIT + 1];

    for (int i = 0; i <= LIMIT; i++) {
        ehPrimo[i] = true;
    }
	
	// Peneira de Eratóstenes
    for (int p = 2; p * p <= LIMIT; p++) {
        if (ehPrimo[p]) {
            for (int i = p * p; i <= LIMIT; i += p) {
                ehPrimo[i] = false;
            }
        }
    }

    for (int i = 2; i <= LIMIT; i++) {
        if (ehPrimo[i]) {
            soma += i;
        }
    }

    printf("A soma de todos os numeros primos abaixo de 2 milhoes eh: %llu\n", soma);

    return 0;
}
