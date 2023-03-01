/*****************************************************************//**
 * \file   Source.c
 * \brief  
 * Implementação das Funções da DLL
 * \author lufer
 * \date   December 2020
 *********************************************************************/

#include "funcoes.h"

/**
 * Calcula a soma de dois valores inteiros.
 *
 * \param x
 * \param y
 * \return
 */
int soma(int x, int y) {
    return (x + y);
}

/**
 * Encontra o maior entre dois valores.
 *
 * \param x
 * \param y
 * \return
 */
int maior(int x, int y) {
    return ((x > y) ? x : y);
}

