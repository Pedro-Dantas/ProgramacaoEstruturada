#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
	
	int base, altura, hipotenusa, hipotenusa_centimetro;

	printf("Entre com o tamanho da base do telhado: ");
	scanf("%d", &base);

	printf("Agora entre com a altura: ");
	scanf("%d", &altura);

	hipotenusa = pow(base, 2) + pow(altura, 2);

	hipotenusa_centimetro = sqrt(hipotenusa);

	hipotenusa_centimetro *= 100;

	printf("A quantidade de fio a ser comprada eh de %d centimetros.\n\n", hipotenusa_centimetro);

	return 0;
}
