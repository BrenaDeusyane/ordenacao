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

//Comparando o inicio do vetor, com meio do vetor em diante e colocando no vetor auxiliar
  while(  (com1 <= meio) && (com2 <= fim) ){
    if (vetor[com1] < vetor[com2]){
      vetor_aux[aux] = vetor[com1];
      com1++;
    }else{
      vetor_aux[aux] = vetor[com2];
      com2++;
    }
    aux++;
  }
//Caso a primeira parte do vetor não tenha sido rodada inteira
  for(int i = com1; i <= meio; i++){
    vetor_aux[aux] = vetor[i];
    aux++;
  }

  printf("\n[");
  for(int i=0; i<tam_vetor; i++){
    printf("%d ", vetor_aux[i]);
  }
  printf("]\n");

  return 0;

}