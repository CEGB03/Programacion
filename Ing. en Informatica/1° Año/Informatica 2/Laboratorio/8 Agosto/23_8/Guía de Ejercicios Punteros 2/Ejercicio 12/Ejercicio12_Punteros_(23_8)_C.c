/*
	12. Se desea cargar en un vector de punteros una cantidad de saldos de
proveedores (maximo 10). La carga finaliza con un saldo menor o igual a cero.
	Además, desarrolle las siguientes funciones para mostrar:

a. Cantidad de saldos cargados.
b. Promedio de saldos.
c. Cantidad de saldos menores al promedio.
d. Cantidad de saldos mayores al promedio.
e. Calcular cuánto fue lo recaudado en el mes.

*/
#include <stdio.h>
#include <stdlib.h>
#define L_VECTOR 10
void Menu();
void Carga_Manual(int [L_VECTOR], int , int *);
void Cant_Sal_Carg(int [L_VECTOR], int *);
void Promedio_Saldos(int [L_VECTOR], int *);
void Menores_Prom(int [L_VECTOR]);
void Mayores_Prom(int [L_VECTOR]);
void Recaudado_Mes(int [L_VECTOR]);
int main(){
	Menu();
	//printf("\n");
	system("pause");
	return 0;
}
void Menu(){
	int Contador=0, Saldo=0, Arreglo[L_VECTOR]={0};
	char Opcion=' ', Salida=' ';
	int *P_Contador=&Contador;
	Carga_Manual(Arreglo, Saldo, P_Contador);
	do{
		printf("Bienvenido al Menu de Opciones, Seleccione segun corresponda\n");
		printf("a. Cantidad de saldos cargados.\n");
		printf("b. Promedio de saldos.\n");
		printf("c. Cantidad de saldos menores al promedio.\n");
		printf("d. Cantidad de saldos mayores al promedio.\n");
		printf("e. Calcular cuánto fue lo recaudado en el mes.\n");
		scanf(" %c",&Opcion);
		switch(Opcion){
		case 'a':
		case 'A':
			printf("a. Cantidad de saldos cargados.\n");
			Cant_Sal_Carg(Arreglo, P_Contador);
			break;
		case 'b':
		case 'B':
			printf("b. Promedio de saldos.\n");
			Promedio_Saldos(Arreglo, P_Contador);
			printf("El Promedio de los saldos es: %.2f.\n",*P_Contador);
			break;
		case 'c':
		case 'C':
			printf("c. Cantidad de saldos menores al promedio.\n");
			Menores_Prom;
			break;
		case 'd':
		case 'D':
			printf("d. Cantidad de saldos mayores al promedio.\n");
			Mayores_Prom;
			break;
		case 'e':
		case 'E':
			printf("e. Calcular cuánto fue lo recaudado en el mes.\n");
			Recaudado_Mes;
			break;
		default:
			printf("Seleccion Invalida.\n");
			break;
		}
		printf("¿Desea volver al menu de seleccion?\n");
		scanf(" %c",&Salida);
	} while(Salida=='s' || Salida=='S');
}
void Carga_Manual(int Arreglo[L_VECTOR], int Saldo, int *Contador){
	do{
		printf("Ingrese el saldo N°%d, si ya termino de cargar ingrese un numero menor o igual a 0, (valor maximo del Saldo 10)\n",(*Contador)+1);
		scanf("%d",&Saldo);
		if(Saldo>0){
			Arreglo[*Contador]=Saldo;
			Contador++;
		}
	} while((*Contador<=9) && (Saldo>0));
}
void Cant_Sal_Carg(int Arreglo[L_VECTOR], int *Contador){
	int N_Saldos=0;
	printf("La cantidad del contador fue: %d\n",*Contador);
	for(int ii=0 ; ii<(*Contador) ; ii++){
		N_Saldos++;
	}
	printf("La cantidad de saldos cargados fueron: %d\n",N_Saldos);
}
void Promedio_Saldos(int Arreglo[L_VECTOR], int *Contador){
	int Suma=0;
	float Cont=(*Contador), Promedio=0;
	for(int ii=0 ; ii<L_VECTOR ; ii++){
		Suma+=Arreglo[ii];
	}
	Promedio=Suma/Cont;
	
}
void Menores_Prom();
void Mayores_Prom();
void Recaudado_Mes();
