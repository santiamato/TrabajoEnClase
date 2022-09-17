/*
 ============================================================================
 Name        : Ejercicio7-3.c
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
/**
 * \fn int esLetraConEspacio(char*)
 * \brief valida que la cadena son solo letras y espacio en el medio
 *
 * \param pResultado cadena es un puntero al espacio de memoria donde se dejara el
resultado de la funcion
 * \return Retorna 1 si tdo ok, 0, SI ES ERROR.
 */
int esLetraConEspacio(char *pResultado);
/**
 * \fn int esSoloLetra(char*)
 * \brief valida que la cadena son solo letras
 *
 * \param pResultado cadena es un puntero al espacio de memoria donde se dejara el
resultado de la funcion
 * \return Retorna 1 si tdo ok, 0, SI ES ERROR.
 */
int esSoloLetra(char *pResultado);

int main(void) {
	setbuf(stdout, NULL);

	char cadenaLetrasEspacios[11];
	char cadenaLetras[11];

	if(esLetraConEspacio(cadenaLetrasEspacios) == 1){
		printf("BIEN HECHO, su cadena es: %s \n", cadenaLetrasEspacios);
	}else{
		printf("ERROR: Intentelo nuevamente (SOLO LETRAS Y ESPACIOS)\n");
	}

	if(esSoloLetra(cadenaLetras) == 1){
		printf("BIEN HECHO, su cadena es: %s \n", cadenaLetras);
	}else{
		printf("ERROR: Intentelo nuevamente (SOLO LETRAS)\n");
	}

	return EXIT_SUCCESS;
}

int esLetraConEspacio(char *pResultado){
	int retorno = 0;
	int tieneLetra = 0;
	int tieneNumero = 0;
	int tieneEspacio = 0;
	printf("Ingrese solo letras con espacios(MAX 10)");
	gets(pResultado);
	for (int i = 0; i < strlen(pResultado); i++){
		char caracter = pResultado[i];
		if(isalpha(caracter)){
			tieneLetra = 1;
		}
		if(caracter == ' '){
			tieneEspacio = 1;
		}
		if(isdigit(caracter)){
			tieneNumero = 1;
		}
		retorno = 1;
	}
	if(tieneNumero != 0){
		retorno = 0;
	}
	return retorno;
}

int esSoloLetra(char *pResultado){
	int retorno = 0;
	int tieneLetra = 0;
	int tieneNumero = 0;
	int tieneEspacio = 0;
	printf("Ingrese solo letras(MAX 10)");
	gets(pResultado);
	for (int i = 0; i < strlen(pResultado); i++){
		char caracter = pResultado[i];
		if(isalpha(caracter)){
			tieneLetra = 1;
		}
		if(caracter == ' '){
			tieneEspacio = 1;
		}
		if(isdigit(caracter)){
				tieneNumero = 1;
		}
		retorno = 1;
	}
	if(tieneNumero != 0 || tieneEspacio != 0){
		retorno = 0;
	}
	return retorno;
}
