/*
 * cliente.c
 *
 *  Created on: May 3, 2014
 *      Author: paulo
 */

#include "kermit.h"

int main() {
	habilitar_camada_rede();
	programa_cliente();
	desabilitar_camada_rede();
	return 0;
}
