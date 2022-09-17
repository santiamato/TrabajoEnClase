/*
 ============================================================================
 Name        : Ejercicio6-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int ordenarArray(int *array);
int mostrarPositivos(int array[]);
int mostrarNegativos(int array[]);

int main(void) {
	setbuf(stdout, NULL);

	int array[10];

	for(int i = 0; i < 10; i++){
		printf("Ingrese un valor para el array: ");
		fflush(stdin);
		scanf("%d", &array[i]);
	}
	ordenarArray(array);
	mostrarPositivos(array);

	mostrarNegativos(array);

	return EXIT_SUCCESS;
}

int ordenarArray(int *array){
	int aux;
	for(int i = 0; i < 10; i++){
		for(int j = 0; j < 9; j++){

			if(array[j] > array[j+1]){

				aux = array[j+1];
				array[j+1] = array[j];
				array[j] = aux;
			}
		}
	}
	return 0;
}

int mostrarPositivos(int array[]){
	printf("Los numeros positivos ordenados de manera creciente: \n");
	for(int i = 0; i < 10; i++){
		if(array[i] > 0){
			printf("%d \n", array[i]);
		}
	}
	return 0;
}

int mostrarNegativos(int array[]){
	printf("Los numeros Negativos ordenados de manera decreciente: \n");
	for(int i = 10; i > 0; i--){
		if(array[i] < 0){
			printf("%d \n", array[i]);
		}
	}
	return 0;
}
