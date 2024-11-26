#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int variavelGlobal;

void imprimirNumero(){
	printf(%d, variavelGlobal);	
}

float converterKgParaGrama(float *peso){
	*peso = *peso * 1000;
	return peso;
}

int main (){
	float p = 10.0;
	
	printf("Peso antes de chamar a fun??o %f\n", p);
	float res = converterKgParaGrama(&p);
	printf("Peso depois de chamar a fun??o %f\n", p);
	print("Resultado da fun??o ? %f\n", res);
	
	return 0;
}

