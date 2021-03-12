#include <stdio.h>
 int main (void) {
	float peso,imc, altura;
	printf("Digite seu peso e altura:");
	scanf("%f %f", &peso, &altura);
	imc = peso / (altura*altura);
	if (imc < 18.5) puts("Magra(o)");
	else if (imc > 18.5 && imc <= 30) puts("Normal");
	else puts("Obesa(o)");

	return 0;
	}



