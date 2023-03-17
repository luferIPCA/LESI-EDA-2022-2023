/*****************************************************************//**
 * @file   SourceII.c
 * @brief  Abordagem II: Uso de funções, antes do main. Tudo no mesmo ficheiro .c
 * 
 * @author lufer
 * @date   February 2023
 *********************************************************************/


#include <stdio.h>


/**
 * @brief .
 * 
 * @param x
 * @param y
 * @return 
 * @author lufer
 *
 */
int Soma2(int x, int y) {
	return (x + y);
}

int main2() {

	int x = 4;
	int y = 5;
	int soma = Soma2(x, y);
	printf(" VERS2: %d + %d = %d\n", x, y, soma);
}