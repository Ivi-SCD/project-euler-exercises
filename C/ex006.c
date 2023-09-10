#include <stdio.h>
#include <math.h>

int somaDosTermos(int a1, int n, int r);
int somaDosQuadrados(int n);

int main() {
	
	int quadradoDaSoma = pow(somaDosTermos(1, 100, 1), 2);
	int somaDoQuadrado =  somaDosQuadrados(100);

	int diferenca = quadradoDaSoma - somaDoQuadrado; 
	printf("\n%d\n", diferenca);

}

int somaDosTermos(int a1, int n, int r) {
	int an = a1 + ((n - 1) *r);
	return ((a1 + an)*n)/2;
}

int somaDosQuadrados(int n) {
	int soma = 0;

	for(int i = 1; i <= n; i++) {
		soma = soma + (i*i);
	}

	return soma;
}
