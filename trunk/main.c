/*
 * main.c
 *
 *  Created on: 11/01/2010
 *      Author: diego
 */

#include "excepcion.h"

void metodo(void);

int main(int argc, char *argv[]) {

	TRY {
		printf("Dentro del TRY\n");
		metodo();
		printf("No debo aparecer\n");
	} CATCH( FOO_EXCEPTION ) {
		printf("Estamos en Foo!\n");
	} CATCH( BAR_EXCEPTION ) {
		printf("Estamos en Bar!\n");
	} CATCH( BAZ_EXCEPTION ) {
		printf("Estamos en Baz!\n");
	} FINALLY {
		printf("...y llegamos a la clausula FINALLY\n");
	} END_TRY;

	return 0;

}

void metodo(void) {

	printf ("Dentro del metodo\n");
	THROW( BAR_EXCEPTION );

}
