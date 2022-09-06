/*
 * biblioteca.c
 *
 *  Created on: 6 sep. 2022
 *      Author: santi
 */
#include <stdio.h>
#include <stdlib.h>


int mostrarMenu(){
	int opcion;
	printf("1. Loguearse \n"
			"2. Comprar \n"
			"3. Ver mis compras \n"
			"4. Vender \n"
			"5. Salir \n");
	scanf("%d", &opcion);

	return opcion;
}

int validarOpcion(int opcion, int opcionAceptada){
	while(opcion != opcionAceptada){
		printf("Primero debe de pasar por lo anterior para poder continuar...\n");
		opcion = mostrarMenu();
	}
	return 0;
}


