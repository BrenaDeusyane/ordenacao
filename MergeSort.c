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

//Dividi o vetor em duas partes
  for (int i=0; i<=quantidade/2; i++){
    vetor_auxiliar1[i] = vetor_principal[(quantidade/2)+i];
  }

//Organizando os valores em ordem crescente do vetor principal(Os primeiros valores do vetor)
  int j;
  for (int i=0; i < quantidade/2; i++){
    for(j = i+1; j<quantidade/2; j++){
      if (vetor_principal[i] > vetor_principal[j]){
        vetor_auxiliar2[j-1] = vetor_principal[j];
      }
      else{
        vetor_auxiliar2[j-1] = vetor_principal[j];
      }
    }
  }

//Organizando os valores em ordem crescente do vetor auxiliar1(Os segundos valores do vetor)
  for (int i=0; i < quantidade/2; i++){
    for(j = j+1; j<quantidade/2; j++){
      if (vetor_auxiliar1[i] > vetor_auxiliar1[i+1]){
        vetor_auxiliar2[j] = vetor_auxiliar1[i+1];
      }
      else{
        vetor_auxiliar2[j] = vetor_auxiliar1[i];
      }
    }
  }

  return 0;
}