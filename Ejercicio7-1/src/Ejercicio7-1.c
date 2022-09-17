/*
 ============================================================================
 Name        : Ejercicio7-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void FormarApellidoNombre(char* pNombre,char* pApellido,char* pCompleto);

int main(void) {
	setbuf(stdout, NULL);

	char nombre[20];
	char apellido[20];
	char nombreCompleto[50];
//
	printf("Ingrese su Nombre");
	fflush(stdin);
	gets(nombre);
	printf("Ingrese su Apellido");
	fflush(stdin);
	gets(apellido);

	FormarApellidoNombre(nombre, apellido, nombreCompleto);

	return EXIT_SUCCESS;
}

void FormarApellidoNombre(char* pNombre,char* pApellido,char* pCompleto){
	strcat(pCompleto, pNombre);
	strcat(pCompleto, ", ");
	strcat(pCompleto, pApellido);
	printf("\n Nombre Completo: %s ", pCompleto);
}
