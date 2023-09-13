#include <stdio.h>

int ehPrimo(int num);

int main() {
	int num = 2, cont = 1;
	while(cont <= 10001) {
		if(ehPrimo(num)) {
			cont++;
		}
		num++;
	}
	printf("O 10001 primo eh: %d\n", num-1);
}

int ehPrimo(int num) {
	int i;

    	if (num <= 1) {
        	return 0;
    	}

   	 for (i = 2; i <= num / 2; i++) {
       	 	if (num % i == 0) {
        	    return 0;
        	}
    	}

   	 return 1;
}

