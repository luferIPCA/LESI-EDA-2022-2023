/*
* author: lufer
* email: lufer@ipca.pt
* desc: Apontadores
*/

#include "Dados.h"

//int* changeValue(const int* p) {
			//n�o � permitido pois � const
int changeValue( int* p) {
	*p = *p + 1;		
	return *p;
}

int Maior(int* p, int* q) {
	if (*p > *q) return *p;
	return *q;
}

bool TrocaII(int* p, int* q) {
	//return false;
	
	return true;
}

/**
* Verifica se determinado existe num array
* @param [in] n
* @param [out] p	//posi��o do array
*/
bool ExisteValorPosicao(int v[], int n, int valor, int* pos) {

	for (int i = 0; i < n; i++) {
		if (v[i] == valor) {
			*pos = i;		//posi��o onde existe
			return (true);
		}
	}
	*pos = -1;				//posi��o errada!
	return (false);
}

/**
* Analisar!!!! Qual o problema?
*/
int get(int* ptr) {
	int a = 10;
	ptr = &a;
	return 0;
}
