/*
	4. Desarrolle un programa que declare e inicialice un vector de 5 valores
(4.5,8,2.3,1.1,3). Luego, se pide que halle el valor máximo, mínimo y el
promedio de ellos. Finalmente mostrar los resultados. Utilice punteros para
realizar el ejercicio.
*/
/*
	Hacer:
		Arreglo uni de 5,
		con valores asignados
	Mostrar usando punteros:
		El maximo,
		el minimo,
		el promedio.
*/

#include <stdio.h>
#include <stdlib.h>
#define L_SECEUNCIA 5

//void Mostrar(float [L_SECEUNCIA]);
void Mayor(float [L_SECEUNCIA]);
void Menor(float [L_SECEUNCIA]);

int main(){
	float Secuencia[L_SECEUNCIA]={4.5,8,2.3,1.1,3}, *Evaluar_Secuencia=NULL, Suma=0;
	for(int ii=0 ; ii<L_SECEUNCIA ; ii++){
		Evaluar_Secuencia=&Secuencia[ii];
		Suma+=(*Evaluar_Secuencia);
		printf("%0.2f | ",*Evaluar_Secuencia);
		
	}
	printf("\n");
	printf("La sumatoria es: %0.2f",Suma);
	printf("\n");
	
	system("pause");
	return 0;
}
