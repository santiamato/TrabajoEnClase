/*
 ============================================================================
 Name        : Ejercicio3-5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Restar1();
int Restar2(void);
int Restar3();
int Restar4(void);


int main(void) {
	setbuf(stdout, NULL);

	int opcion;

	printf("Que funcion quiere usar para restar: \n"
			"1-Restar1\n"
			"2-Restar2\n"
			"3-Restar3\n"
			"4-Restar4\n");
	scanf("%d", &opcion);

	switch(opcion){
		case 1:
			printf("El resultado de la resta con la opcion 1 es: %d", Restar1());
			break;
		case 2:
			printf("El resultado de la resta con la opcion 2 es: %d", Restar2());
			break;
		case 3:
			printf("El resultado de la resta con la opcion 3 es: %d", Restar3());
			break;
		case 4:
			printf("El resultado de la resta con la opcion 4 es: %d", Restar4());
			break;
	}



	return EXIT_SUCCESS;
}

int Restar1(){
	int resultado;
	int num1;
	int num2;
	printf("Ingrese los dos numeros que quiere restar");
	scanf("%d", &num1);
	scanf("%d", &num2);

	resultado = num1 - num2;
	return resultado;
}

int Restar2(void){
	int resultado;
	int num1;
	int num2;
	printf("Ingrese los dos numeros que quiere restar");
	scanf("%d", &num1);
	scanf("%d", &num2);

	resultado = num1 - num2;
	return resultado;
}

int Restar3(){
	int resultado;
	int num1;
	int num2;
	printf("Ingrese los dos numeros que quiere restar");
	scanf("%d", &num1);
	scanf("%d", &num2);

	resultado = num1 - num2;
	return resultado;
}

int Restar4(void){
	int resultado;
	int num1;
	int num2;
	printf("Ingrese los dos numeros que quiere restar");
	scanf("%d", &num1);
	scanf("%d", &num2);

	resultado = num1 - num2;
	return resultado;
}

