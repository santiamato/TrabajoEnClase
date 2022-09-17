/*
 ============================================================================
 Name        : Ejercicio5-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float promedioArray(int array[], int cantElementos);

int main(void) {
	setbuf(stdout, NULL);

	int cantElementos;
	int i;

	printf("Cuantos numeros desea poder ingresar en el array: ");
	scanf("%d", &cantElementos);

	int array[cantElementos];

	for(i = 0; i < cantElementos; i++){
			printf("Ingrese un numero para el array: \n");
			scanf("%d", &array[i]);
	}

	printf("El promedio de la suma de los elementos del array es: %f", promedioArray(array, cantElementos));

	return EXIT_SUCCESS;
}

float promedioArray(int array[], int cantElementos){
	int sumaElementos = 0;
	float promedio;
	int i;
	for(i = 0; i < cantElementos; i++){
		sumaElementos += array[i];
	}

	promedio = (float)sumaElementos / i;
	return promedio;
}
