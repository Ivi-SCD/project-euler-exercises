#include <stdio.h>
#include <stdbool.h>

bool ehPalindromo(int num);

int main() {
	
	int maior = 0, multiplicacao;
	
	for(int i = 10; i < 1000; i++) {
		for(int j = 10; j < 1000; j++) {
			multiplicacao = i*j;
			if(ehPalindromo(multiplicacao)) {
				if(multiplicacao > maior) {
					maior = multiplicacao;
				}

			}	

		}

	}

	printf("\n%d\n", maior);
	
	return 0;
}

bool ehPalindromo(int num) {
	int inverso = 0, original = num;

	while(num > 0) {
		inverso = 10 * inverso + num%10;
		num /= 10;
	}
	
	if(inverso == original) {
		return true;
	}
	return false;

}
