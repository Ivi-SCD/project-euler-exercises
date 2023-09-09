#include <stdio.h>

int main() {
	int i, soma = 0;

	for(i = 0; i < 1000; i++) {
		if(i%3 == 0 || i%5 == 0) {
			soma+=i;
		}
	}

	printf("A soma de todos os numeros naturais antes de 1000 eh: %d", soma);

	return 0;
}
