#include <stdio.h>

int main() {
	
	int termoUm = 1, termoDois = 2, termoTres;
	int soma = 2;

	while((termoUm + termoDois) <= 4000000) {
		termoTres = termoUm + termoDois;
		if(termoTres % 2 == 0) {
			soma += termoTres;
		}
		termoUm = termoDois;
		termoDois = termoTres;	
	}

	printf("\nA soma dos termos pares da sequencia de fibonacci abaixo de 4 milhoes eh: %d\n", soma);
}
