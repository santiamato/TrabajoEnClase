/*
 ============================================================================
 Name        : Ejercicio5-1.c
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

	int num[5];
	int i;
	int sumaNums = 0;
	int numsImpares[3];
	int o = 0;

	for(i = 0; i < 5; i++){
		printf("Ingrese un numero para el array: \n");
		fflush(stdin);
		scanf("%d", &num[i]);

		if(num[i] % 2 != 0){
			numsImpares[o] = num[i];
			o++;
		}

		sumaNums += num[i];
	}

	printf("La suma de los numeros del array es: %d \n", sumaNums);

//	for(int i = 0; i < 3; i++){
//		printf("Los numeros impares del array son: %d \n", numsImpares[i]);
//	}
	printf("Los numeros impares del array son: %d \n", numsImpares[0]);
	printf("Los numeros impares del array son: %d \n", numsImpares[1]);
	printf("Los numeros impares del array son: %d \n", numsImpares[2]);


	return EXIT_SUCCESS;
}
