#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {

	int n;

inicio:
	printf("Entre com um valor inteiro: ");
	(void)scanf("%d", &n);

	if ( n > 0 ) {

		float num_har = 1;

		for (int i = 2; i <= n; ++i) {

			num_har += (float)1 / i;

			if ( i == n )
				printf("\nO valor do numero harmonico para n = %d eh de: %f", n, num_har);
		}
	}
	else if ( n <= 0 ) {
		printf("\nValor inteiro menor ou igual a zero! Entre com um valor válido: \n\n");
		goto inicio;
	}

	printf("\n\n");

	return 0;
}
