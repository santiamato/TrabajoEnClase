/*
 ============================================================================
 Name        : Ejercicio6-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int cargarLegajos(int *legajos);
int cargarEdades(int *edades);
int cargarSalarios(int *salarios);
int cargarSexos(char *sexo);

#define EMPLEADOS 15


int main(void) {
	setbuf(stdout, NULL);
	int legajos[15];
	int edades[15];
	int salarios[15];
	char sexos[15];
	int sumaSueldos = 0;
	float sueldoPromedio;
	int cantNoBinarios = 0;

	cargarLegajos(legajos);
	cargarEdades(edades);
	cargarSalarios(salarios);
	cargarSexos(sexos);

	for(int i = 0; i < EMPLEADOS; i++){
		printf("El legajo del empleado %d es: %d \n", i, legajos[i]);
		printf("La edad del empleado %d es: %d \n", i, edades[i]);
		printf("El salario del empleado %d es: %d \n", i, salarios[i]);
		printf("El sexo del empleado %d es: %c \n", i, sexos[i]);

		if(sexos[i] == 'b'){
			cantNoBinarios++;
		}

		sumaSueldos += salarios[i];
	}
	sueldoPromedio = (float)sumaSueldos / EMPLEADOS;
	printf("El sueldo promedio es: %.2f \n", sueldoPromedio);
	printf("La cantidad de personas no binarias es: %d \n", cantNoBinarios);

	return EXIT_SUCCESS;
}

int cargarLegajos(int *legajos){
	for(int i = 0; i < EMPLEADOS; i++){
		printf("Ingrese el legajo del empleado %d: ", i);
		scanf("%d", &legajos[i]);
	}
	return 0;
}

int cargarEdades(int *edades){
	for(int i = 0; i < EMPLEADOS; i++){
		printf("Ingrese la edad del empleado %d: ", i);
		scanf("%d", &edades[i]);
	}
	return 0;
}

int cargarSalarios(int *salarios){
	for(int i = 0; i < EMPLEADOS; i++){
		printf("Ingrese el salario del empleado %d: ", i);
		scanf("%d", &salarios[i]);
	}
	return 0;
}

int cargarSexos(char *sexo){
	for(int i = 0; i < EMPLEADOS; i++){
		do{
			printf("Ingrese el sexo del empleado %d: \n", i);
			fflush(stdin);
			scanf("%c", &sexo[i]);
		}while((sexo[i] != 'f') && (sexo[i] != 'm') && (sexo[i] != 'b'));
	}
	return 0;
}
