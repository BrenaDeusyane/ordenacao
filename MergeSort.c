#include <stdio.h>

int main(void) {
  int quantidade;

  printf("Qual a quantidade?\n");
  scanf("%d", &quantidade);

  int vetor_principal[quantidade-1];
  int vetor_auxiliar1[quantidade-1];
  int vetor_auxiliar2[quantidade-1];
  int aux;

  for(int i=0; i<quantidade; i++){
    scanf("%d", &vetor_principal[i]);
  }
// Colocando o menor valor do par, nos números pares
  for(int i=0; i<quantidade/2; i++){
    if(i%2==0){
      if(vetor_principal[i] > vetor_principal[i+1]){
        aux = vetor_principal[i];
        vetor_principal[i] = vetor_principal[i+1];
        vetor_principal[i+1] = aux;
      }
    }
  }

  return 0;
}