/*
 ============================================================================
 Name        : Ejercicio8-1.c
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

#define PRODUCTOS 3

int cargarCodigos(char *codigos);
int cargarModelos(int *modelos);
int cargarCantidades(int *cantidades);
int cargarPrecios(int *precios);
void cargarMenu(char* opcion);

int main(void) {
	setbuf(stdout, NULL);
	char codigos[PRODUCTOS][5];
	char modelos[PRODUCTOS][11];
	int cantidades[PRODUCTOS];
	float precios[PRODUCTOS];

	char opcionSalir;
	char opcion;
	int banderaA = 1;
	int banderaB = 1;
	int banderaC = 1;
	int banderaD = 1;
	int banderaE = 1;

	cargarMenu(&opcion);
	do{
		switch(opcion){
			case 'A':
				cargarCodigos(&codigos);
				break;
			case 'B':

				break;
			case 'C':

				break;
			case 'D':

				break;
			case 'E':

				break;
			case 'F':

				break;
			case 'G':
				printf("Desea salir? s/n");
				fflush(stdin);
				scanf("%c", &opcionSalir);
				break;
			default:
				printf("ERROR: Esa opcion no existe.");

		}

	}while(opcionSalir != 's');

	for(int i = 0; i < PRODUCTOS; i++){
		printf("%c", codigos[i]);
	}


	return EXIT_SUCCESS;
}

void cargarMenu(char* opcion){
	printf("A)Carga de productos \n"
			"B)Venta de productos \n"
			"C)Modificacion del precio \n"
			"D)Modificacion del modelo \n"
			"E)Listar ordenado del codigo \n"
			"F)Listar datos de los productos con menos de 3 unidades \n"
			"G)Salir \n");
	fflush(stdin);
	scanf("%c", opcion);
}

int cargarCodigos(char *codigos){
	for(int i = 0; i < PRODUCTOS; i++){
		do{
			printf("Ingrese el codigo del producto %d: (alfanumerico de 4 caracteres)\n", i);
			scanf("%c", &codigos[i]);
		}while(strlen(codigos[i]) != 4);
	}
	return 0;
}

int cargarModelos(int *modelos){
	for(int i = 0; i < PRODUCTOS; i++){
		printf("Ingrese el modelo del producto %d: (maximo 10 caracteres)\n", i);
		scanf("%d", &modelos[i]);
	}
	return 0;
}

int cargarCantidades(int *cantidades){
	for(int i = 0; i < PRODUCTOS; i++){
		printf("Ingrese la cantidad del producto %d: \n", i);
		scanf("%d", &cantidades[i]);
	}
	return 0;
}

int cargarPrecios(int *precios){
	for(int i = 0; i < PRODUCTOS; i++){
		printf("Ingrese el codigo del producto %d: \n", i);
		scanf("%d", &precios[i]);
	}
	return 0;
}
