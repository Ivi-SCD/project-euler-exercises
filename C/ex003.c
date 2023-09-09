#include <stdio.h>

int maiorFatorPrimo(long long numero);

int main() {

	long long primo = 600851475143;
	
	printf("\nO maior primo de 600851475143 eh: %lld\n", maiorFatorPrimo(primo));
}

int maiorFatorPrimo(long long numero) {

	long long maiorPrimo = -1, i=2;
	
	while(i * i <= numero) {
		while(numero %i == 0) {
			maiorPrimo = i;
			numero /= i;
		}
		i++;
	}

	if(numero > 1)
		maiorPrimo = numero;

	return maiorPrimo;

}
