/*
 ============================================================================
 Name        : DesafioMenu.c
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
	int opcion;
	int banderaIniciar = 0;
	int banderaProcesar = 0;
	char respuesta;

	do{
		printf("1) Iniciar \n"
				"2) Procesar \n"
				"3) Finalizar \n"
				"4) Salir \n");
		scanf("%d", &opcion);

//		if(opcion == 1){
//			printf("El programa se inicio");
//			banderaIniciar = 1;
//		}
//
//		if(opcion == 2){
//			if(banderaIniciar == 0){
//				printf("Debe Iniciar antes de Procesar");
//			}else{
//				printf("El programa se esta procesando");
//				banderaProcesar = 1;
//			}
//		}
//
//		if(opcion == 3){
//			if(banderaIniciar == 0){
//				printf("Debe Iniciar antes de Finalizar");
//			}else if(banderaProcesar == 0){
//				printf("Debe procesar antes de finalizar");
//			}else{
//				printf("El programa esta Finalizando");
//			}
//		}
//
//		if(opcion == 4){
//			printf("Quiere seguir ingesando? S/N");
//			scanf("%c", &respuesta);
//		}
		switch(opcion){
			case 1:
				printf("El programa se inicio\n");
				banderaIniciar = 1;
				break;
			case 2:
				if(banderaIniciar == 0){
					printf("Debe Iniciar antes de Procesar\n");
				}else{
					printf("El programa se esta procesando\n");
					banderaProcesar = 1;
				}
				break;
			case 3:
				if(banderaIniciar == 0){
					printf("Debe Iniciar antes de Finalizar\n");
				}else if(banderaProcesar == 0){
					printf("Debe procesar antes de finalizar\n");
				}else{
					printf("El programa esta Finalizando\n");
				}
				break;
			case 4:
				if(opcion == 4){
					printf("Esta seguro que quiere salir? S/N \n");
					fflush(stdin);
					scanf("%c", &respuesta);
				}
				break;
			default:
				printf("No es una opcion\n");
		}
	}while(respuesta != "S");












	return EXIT_SUCCESS;
}
