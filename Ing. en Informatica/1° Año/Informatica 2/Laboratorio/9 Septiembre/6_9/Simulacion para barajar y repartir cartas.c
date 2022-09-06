#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Palos 4
#define Cartas 13
#define Total_Cartas 52

void Iniciar_Mazo(int [Palos][Cartas]);
void Mostrar_Mazo(int [Palos][Cartas]);
void Mostrar_Mazo_Ordenado(int [Palos][Cartas]);

int main(){
	int Mazo[Palos][Cartas]={0};
	Iniciar_Mazo(Mazo);
	Mostrar_Mazo(Mazo);
	Mostrar_Mazo_Ordenado(Mazo);
	system("pause");
	return 0;
}
void Iniciar_Mazo(int Arreglo[Palos][Cartas]){
	srand(time(NULL));
	int Filas=0, Columnas=0;
	for(int ii=1 ; ii<=Total_Cartas ; ){
		Filas=rand()%4;
		Columnas=rand()%13;
		if(Arreglo[Filas][Columnas]==0){
			Arreglo[Filas][Columnas]=ii;
			ii++;
		}
	}
}
void Mostrar_Mazo(int Arreglo[Palos][Cartas]){
	for(int ii=0 ; ii<Palos ; ii++){
		for(int jj=0 ; jj<Cartas ; jj++){
			printf("%d | ", Arreglo[ii][jj]);
		}
		printf("\n");
	}
}
void Mostrar_Mazo_Ordenado(int Arreglo[Palos][Cartas]){
	int iii=1;
	for(int ii=0 ; ii<Palos ;ii++ ){
		for(int jj=0 ; jj<Cartas ;jj++ ){
			if((Arreglo[ii][jj])==iii){
				printf("La carta numero %d es un ",iii);
				switch(jj){
					case(0):
						printf("As");
					break;
					case(11):
						printf("Jota");
					break;
					case(12):
						printf("Reina");
					break;
					case(13):
						printf("Rey");
					break;
				default:
					printf("%d",jj);
				}
				switch(ii){
					case(0):
						printf("Corazones");
					break;
					case(1):
						printf("Diamantes");
					break;
					case(2):
						printf("Picas");
					break;
					case(3):
						printf("Treboles");
					break;
					
				}
				iii++;
				//printf("%d | ", Arreglo[ii][jj]);
			}
		}
		printf("\n");
	}
	
}
