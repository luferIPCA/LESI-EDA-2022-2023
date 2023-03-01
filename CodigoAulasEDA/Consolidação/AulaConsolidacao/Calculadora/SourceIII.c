/*****************************************************************//**
 * @file   SourceIII.c
 * @brief  Abordagem 3: Assinaturas de funções. Funções deposi do main. Tudo no mesmo ficheiro
 * 
 * @author lufer
 * @date   February 2023
 *********************************************************************/

#include <stdio.h>

int Soma3(int x, int y);


int main3() {

	int x = 4;
	int y = 5;
	int soma = Soma3(x, y);
	printf(" VERS3 : %d + %d = %d\n", x, y, soma);
}

int Soma3(int x, int y) {
	return (x + y);
}