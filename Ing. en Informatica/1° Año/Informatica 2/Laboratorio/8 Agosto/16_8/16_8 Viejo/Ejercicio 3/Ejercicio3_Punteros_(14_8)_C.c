/*
	3. Escribir un programa que cree un vector de estructura llamada articulo
que tenga los atributos nombre y precio, de tamaño 3. Luego mostrar el listado.
Utilice punteros.
*/
/*
	Hacer:
		Arreglo unidemncional de 3,
		con el nombre de articulo,
		atributos de nombre y precio
		mostrarlo con punteros
*/
#include <stdio.h>
#include <stdlib.h>
#define L_ARTICULO 3

int main(){
	int articulo[L_ARTICULO]={0}, *Mostrar_Articulo=NULL;
	Mostrar_Articulo=&articulo[0];
	for(int ii=0 ; ii<L_ARTICULO ; ii++){
		printf("%X | ",*Mostrar_Articulo);
	}
	printf("\n");
	
	system("pause");
	return 0;
}

