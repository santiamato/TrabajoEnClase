/*
 ============================================================================
 Name        : Ejercicio2-6.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	char letra;
	int cantLetrasM = 0;

	for(int i = 0; i < 5; i++){
		printf("Ingrese un caracter");
		fflush(stdin);
		scanf("%c", &letra);

		if(letra == 'm'){
			cantLetrasM++;
		}
	}

	printf("Se ingresaron: %d letras m", cantLetrasM);





	return EXIT_SUCCESS;
}
