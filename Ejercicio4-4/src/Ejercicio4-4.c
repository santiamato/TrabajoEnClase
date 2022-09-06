/*
 ============================================================================
 Name        : Ejercicio4-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(void) {
	setbuf(stdout, NULL);

	int compras = 0;

	if(	validarOpcion(mostrarMenu(), 1) == 0){
		printf("Usted se a logueado Correctamente \n");
		if(validarOpcion(mostrarMenu(), 2) == 0){
			printf("Usted a ingresado en la seccion de Compras \n");
			if(mostrarMenu() == 4 && compras > 1){
				printf("1. Vender \n"
						"2. Hacer factura \n"
						"3. Volver atras \n");
			}
		}
	}

	return EXIT_SUCCESS;
}


