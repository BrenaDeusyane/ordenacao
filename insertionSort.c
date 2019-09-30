#include <stdio.h>
int main(void) {
  int quantidade;

  printf("Quantos valores deseja inserir?\n");
  scanf("%d", & quantidade);
  
  int valores[quantidade-1];
  int aux;

  for(int i=0; i<quantidade; i++){
    scanf("%d", & valores[i]);
  }
  //Algoritmo de ordenação InsertSort
  for(int i=1; i<quantidade; i++){
    for(int j=i-1; j>=0; j--){
      if(valores[j+1] < valores[j]){
        aux = valores[j];
        valores[j] = valores[j+1];
        valores[j+1] = aux;
      }
    }
  }

  printf("\n[");
  for(int i=0; i<quantidade; i++){
    printf("%d ",valores[i]);
  }
  printf("]\n");

  return 0;
}