/*
 ============================================================================
 Name        : Ejercicio7-2.c
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

//int obtenerAlfanumericos(char *alfanumerico);
//int validarTelefono(char *telefono);
int esAlfanumerica(char *cadena);

int main(void) {
	setbuf(stdout, NULL);

	char alfanumerico[9];
	char telefonos[9];

	printf("Ingrese una cadena alfanumerica (Maximo 8 caracteres): \n");
	gets(alfanumerico);

	if(esAlfanumerica(alfanumerico) == 1){
		printf("La cadena %s es alfanumerica \n", alfanumerico);
	}else{
		printf("La cadena %s NO es alfanumerica \n", alfanumerico);
	}

	printf("Ingrese un telefono (Maximo 8 caracteres): \n");
	gets(telefonos);

	if(esAlfanumerica(telefonos) == 0){
		printf("La cadena %s es un numero \n", telefonos);
	}else{
		printf("La cadena %s contiene letras \n", telefonos);
	}


	return EXIT_SUCCESS;
}

int esAlfanumerica(char *cadena){
	int i;
	int tieneLetra = 0;
	int tieneNumero = 0;
	for (i = 0; i < strlen(cadena); i++)
	{
		char caracter = cadena[i];
		if (isalpha(caracter))
		{
			tieneLetra = 1;
		}
		if (isdigit(caracter))
		{
			tieneNumero = 1;
		}
	}
	return tieneLetra && tieneNumero;
}

