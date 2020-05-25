#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {

	float m, n, produtorio = 1, i = 1;

	new_m:
	printf("Entre com um valor M maior que zero: ");
	(void)scanf("%f", &m);

	if ( m <= 0 )
		goto new_m;

	new_n:
	printf("Entre com um valor N maior que zero: ");
	(void)scanf("%f", &n);
	
	if ( n <= 0 )
		goto new_n;

	printf("\nO produtorio de m ate n: \n\n");

	for ( i = m; i <= n; i++ ) {
	    produtorio *= i + (1 / i);
		printf("Produtorio[%d]: %.2lf \n", (int)i, (double)produtorio);
	}

	return 0;
}

