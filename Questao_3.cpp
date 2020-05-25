#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {

	int parar, continuar = 1;
	
	float delta_m = 0, delta_t = 0, delta_s = 0, distancia_pecorrida_metros = 0, tempo_gasto_segundos = 0;

	printf("\nDigite um par de zeros sequenciados para projetar o resultado final: \n");

	for (int i = 0; i <= continuar; i++) {

		printf("\nEntre com a distancia pecorrida em metros: ");
		scanf("%f", &distancia_pecorrida_metros);

		printf("Entre com o tempo gasto em segundos: ");
		scanf("%f", &tempo_gasto_segundos);

		delta_s += distancia_pecorrida_metros;
		delta_t += tempo_gasto_segundos;

		if ( distancia_pecorrida_metros == 0 && tempo_gasto_segundos == 0 )
			break;
		else
			continuar++;
	}

	delta_m = (delta_s / delta_t) * 3.6;

	printf("\nA velocidade media eh de %.2f km/h \n\n\n", delta_m);

	return 0;
}


