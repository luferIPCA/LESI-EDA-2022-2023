#include "Header.h"
#include <stdio.h>

int main()
{

	Cliente c;
	c.num = 23;

	Cliente* p;
	p = &c;
	p->num++;

	p = (Cliente*)malloc(sizeof(Cliente));

	ClienteLista a;
	a.c.num = 23;

	ClienteLista* k;
	k = &a;
	k->c = c;
	k->c.num = 24;


	k = (ClienteLista*)malloc(sizeof(ClienteLista));
	k->next = NULL;
	k->c = c;

	ClienteLista* outra = (ClienteLista*)malloc(sizeof(ClienteLista));
	outra->c.num = 45;
	outra->next = NULL;

	k->next = outra;

	ClienteLista* outra2 = (ClienteLista*)malloc(sizeof(ClienteLista));
	outra2->c.num = 40;
	outra2->next = NULL;


}
