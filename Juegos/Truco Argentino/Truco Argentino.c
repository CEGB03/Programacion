#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define Palos 4
#define Cartas 10
#define Total_Cartas 40

void Iniciar_Mazo(int Arreglo[Palos][Cartas]);
void Mostrar_Mazo(int Arreglo[Palos][Cartas]);
void Mostrar_Mazo_Ordenado(int Jug, int Arreglo[Palos][Cartas]);
void Repartir_Cartas(int Arreglo[Palos][Cartas]);

int main(){
  int Mazo[Palos][Cartas]={0};
  Iniciar_Mazo(Mazo);
  
  Mostrar_Mazo(Mazo);
  Repartir_Cartas(Mazo);
  //Mostrar_Mazo_Ordenado(Mazo);
  system("pause");
  return 0;
}
void Iniciar_Mazo(int Arreglo[Palos][Cartas]){
  srand(time(NULL));
  int Filas=0, Columnas=0;
  for(int ii=1 ; ii<=Total_Cartas ; ){
    Filas=rand()%4;
    Columnas=rand()%10;
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
void Mostrar_Mazo_Ordenado(int Jug, int Arreglo[Palos][Cartas]){
  int iii=1;
  static const char *Palos_Cartas[4]={"Espada","Basto","Oro","Copa"};
  static const char *Cartas_Muestra[13]={"Ancho","Dos","Tres","Cuatro","Cinco","Seis","Siete","Diez","Once","Rey"};
  switch (Jug){
    case 0:
      do{
        for(int ii=0 ; ii<Palos ; ii++){
          for(int jj=0 ; jj<Cartas ; jj++){
            if((Arreglo[ii][jj])==iii){
              printf("La carta N° %d es un %s de %s\n",iii, *(Cartas_Muestra+jj), *(Palos_Cartas+ii));
              iii++;
            }
          }
        }
      }while(iii<=Total_Cartas);
      break;
    case 1:
      do{
        for(int ii=0 ; ii<Palos ; ii++){
          for(int jj=0 ; jj<Cartas ; jj++){
            if((Arreglo[ii][jj])==iii){
              printf("La carta N° %d es un %s de %s\n",iii, *(Cartas_Muestra+jj), *(Palos_Cartas+ii));
              iii++;
            }
          }
        }
      }while(iii<=(Jug *2*3));
      break;
    case 2:
      do{
        for(int ii=0 ; ii<Palos ; ii++){
          for(int jj=0 ; jj<Cartas ; jj++){
            if((Arreglo[ii][jj])==iii){
              printf("La carta N° %d es un %s de %s\n",iii, *(Cartas_Muestra+jj), *(Palos_Cartas+ii));
              iii++;
            }
          }
        }
      }while(iii<=((Jug *2) *3));
      break;
    case 3:
      do{
        for(int ii=0 ; ii<Palos ; ii++){
          for(int jj=0 ; jj<Cartas ; jj++){
            if((Arreglo[ii][jj])==iii){
              printf("La carta N° %d es un %s de %s\n",iii, *(Cartas_Muestra+jj), *(Palos_Cartas+ii));
              iii++;
            }
          }
        }
      }while(iii<=((Jug *2) *3));
      break;
  }
}
void Repartir_Cartas(int Arreglo[Palos][Cartas]){
  char Cam_Jug=' ', Repartir=' ';
  int Jugadores=0;
  do{
    printf ("Ingrese la opccion correspondiente\n");
    printf ("1. Para jugar 1 vs. 1\n");
    printf ("2. Para jugar 2 vs. 2\n");
    printf ("3. Para jugar 3 vs. 3\n");
    printf ("0. Para mostrar todas las cartas\n");
    scanf ("%d",&Jugadores);
    switch (Jugadores){
	case 1:
        do{
			Mostrar_Mazo_Ordenado(Jugadores, Arreglo);
			printf ("Repartir de nuevo para volver a jugar con el mismo numero de Jugadoress? S/N  ");
			scanf(" %c",&Repartir);
        }while(Repartir=='S' || Repartir=='s');
        break;
      case 2:
        do{
          Mostrar_Mazo_Ordenado(Jugadores, Arreglo);
          printf ("Repartir de nuevo para volver a jugar con el mismo numero de Jugadoress? S/N  ");
          scanf(" %c",&Repartir);
        }while(Repartir=='S' || Repartir=='s');
        break;
      case 3:
        do{
          Mostrar_Mazo_Ordenado(Jugadores, Arreglo);
          printf ("Repartir de nuevo para volver a jugar con el mismo numero de Jugadoress? S/N  ");
          scanf(" %c",&Repartir);
        }while(Repartir=='S' || Repartir=='s');
        break;
       case 0:
         Mostrar_Mazo_Ordenado(Jugadores, Arreglo);
         break;
    }
    printf ("Desea jugar con un nunero distinto de Jugadores? S/N  ");
    scanf(" %c",&Cam_Jug);
  }while(Cam_Jug=='S' || Cam_Jug=='s');
}
