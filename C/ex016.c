#include <stdio.h>
#include <gmp.h>

int main() {

	char str_resultado [1000];	
	mpz_t resultado;
	mpz_init(resultado);
	
	mpz_set_ui(resultado, 2);
	mpz_pow_ui(resultado, resultado, 1000);

	mpz_get_str(str_resultado, 10, resultado);
	
	int soma = 0;
	
	for(int i = 0; i < 1000; i++) {
		if(str_resultado[i] == '\0') {
			break;
		}

		soma += (str_resultado[i] - '0');
	}

	printf("Soma: %d", soma);

	mpz_clear(resultado);

	return 0;
}
