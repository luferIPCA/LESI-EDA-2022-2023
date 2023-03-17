/*****************************************************************//**
 * @file   Header.h
 * @brief  
 * 
 * @author lufer
 * @date   March 2023
 *********************************************************************/
#pragma once

typedef struct Cliente{
	int num;
}Cliente;


typedef struct ClienteLista {
	Cliente c;
	struct ClienteLista* next;
}ClienteLista;


