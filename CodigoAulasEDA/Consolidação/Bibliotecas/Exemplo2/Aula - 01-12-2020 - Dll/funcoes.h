/*****************************************************************//**
 * \file   funcoes.h
 * \brief  
 * Dynamic Link Libraries (DLL)
 * \author lufer
 * \date   December 2020
 *********************************************************************/
#pragma once
#ifndef MyLIB
#define MyLIB

#define Pi 3.14

__declspec (dllexport) int soma(int x, int y);

__declspec (dllexport)  int maior(int x, int y);

#endif