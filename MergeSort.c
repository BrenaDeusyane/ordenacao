#include <stdio.h>
#include <stdlib.h>

int main(void){
  int tam_vetor;

  printf("\nQuantos valores serão utilizados?\n");
  scanf("%d", &tam_vetor);

  int vetor[tam_vetor];
  int vetor_aux[tam_vetor];
  int inicio = 0, meio, fim = tam_vetor-1;
  int com1 = inicio, com2, aux = 0;
  
  if(inicio < fim){
    meio = tam_vetor/2;
    com2 = meio+1;
  }else{
    printf("*********** Não há quantidade suficiente! ***********\n");
    printf("*********** BYE ***********\n\n");
    exit(0);
  }

//Guardando os dados do vetor
  for (int i=0; i < tam_vetor; i++){
    printf("\nInsira o %d° valor inteiro:\n", i+1);
    scanf("%d", &vetor[i]);
  }
}