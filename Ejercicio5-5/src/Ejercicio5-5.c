/*
 ============================================================================
 Name        : Ejercicio5-5.c
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

	int array[10];
	int pos;
	int i;
	int sumaPositivos = 0;
	float promedio;

	for(i = 0 ; i < 10 ; i++){
		array[i] = 0;
		do{
			printf("Ingrese posici¢n");
			scanf("%d",&pos);
			printf("Ingrese valor a cargar en el array");
			scanf("%d",&array[pos]);
		}while((array[i] < -50 || array[i] > 75) && (array[i] == 0));

		if(array[i] > 0){
			sumaPositivos += array[i];
		}
	}

	promedio = (float)sumaPositivos /10;

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

	for(int i = 0; i < 10; i++){
		printf("%d \n", array[i]);
	}

	printf("El promedio de los positivos es: %.2f \n", promedio);

	return EXIT_SUCCESS;
}
