#include <stdio.h>


void main() {
	int x, y, menor; 
	x = 2520;
	y = 1;
	menor = 0;

	while(x > 0) {
		y = 1;
		while((x % y == 0) && (y <= 20)) {
			if(y == 20) {
				menor = x;
				break;
			}
			y++;
		}
		x++;

		if(menor > 0) {
			break;
		}

	}

	printf("Menor multiplo: %d\n", menor);
	
}
