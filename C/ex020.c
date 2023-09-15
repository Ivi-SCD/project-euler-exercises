#include <stdio.h>
#include <gmp.h>

int main() {
	
	mpz_t cemFatorial;

	mpz_init(cemFatorial);
	mpz_fac_ui(cemFatorial, 100);

	char str_resultado[1000];

	mpz_get_str(str_resultado, 10, cemFatorial);

	int somaDigitos = 0;
	for(int i = 0; str_resultado[i] != '\0'; i++) {
		somaDigitos += str_resultado[i] - '0';
	}

	printf("\nA soma de todos os digitos do fatorial de 100 eh: %d\n", somaDigitos);

}
