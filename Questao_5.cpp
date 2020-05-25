#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {

	int v1[10] = { }, v2[5] = { }, v1_resultante[10] = { }, v2_resultante[10] = { };

	int soma = 0, aux = 0, count = 0;

	for ( int i = 0; i < 10; i++ )	{

		printf("Entre com valor do vetor na posicao v1[%d]: ", i);
		(void)scanf("%d", &v1[i]);

		if (i == 9) {

			printf("\n");

			for (int i = 0; i < 5; i++) {

				printf("Entre com valor do vetor na posicao v2[%d]: ", i);
				(void)scanf("%d", &v2[i]);

				soma += v2[i];
			}
		}
	}

	for ( int i = 0; i < 10; i++ ) {

		if ( v1[i] % 2 == 0 ) {
			v1_resultante[count++] += v1[i] + soma;
		}
	    if ( i == 9 ) {

			printf("\nPrimeiro vetor resultante:\n");

			for ( int i = 0; i < 10; i++ ) {
				printf("posicao[%d] = %d \n", i, v1_resultante[i]);
			}
		}
	}

	for ( int i = 0; i < 10; i++ ) {
		
		int divisores = 0;

		if ( v1[i] % 2 != 0 ) {

			int count = 0;

			while ( count < 5 ) {
				if (v1[i] % v2[count] == 0) {
					divisores += 1;
				}
				count++;
			}
			v2_resultante[aux++] = divisores;
		}
	}

	printf("\nSegundo vetor resultante:\n");

	for ( int i = 0; i < 10; i++ ) {
		printf("posicao[%d] = %d \n", i, v2_resultante[i]);
	}

	return 0;
}
