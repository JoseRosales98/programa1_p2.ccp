#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

  int contador;
  int filas;
  int posiciones;
  int asteriscos;
 
  printf("No. de Filas : ");
  scanf(" %d",&filas);
 
  posiciones=filas*2;

  
  posiciones=filas*2;
  for(contador=1;contador<=posiciones;contador+=2) {
     printf("%*c",((posiciones-(contador))/2)+1,'*');
     for(asteriscos=1;asteriscos<contador;asteriscos++) {
        printf("*");
     }
     printf("\n");
  }
  system("PAUSE");
  return 0;
}
