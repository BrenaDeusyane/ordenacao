#include <stdio.h>

int main(void){
  int tam_vetor;
  int vetor[tam_vetor];
  int inicio = 0, meio, fim = tam_vetor-1;
  
  printf("\nQuantos valores serão utilizados?\n");
  scanf("%d", &tam_vetor);

  if(inicio < fim){
    meio = tam_vetor/2;
    int com1 = inicio, com2 = meio+1, aux = 0;
    int vetor_aux[tam_vetor];
  }
  else{
    printf("*********** Não há quantidade suficiente! ***********\n");
    exit 0;
  }

//Guardando os dados do vetor
  for (int i=0; i < tam_vetor; i++){
    printf("Insira o %d° valor inteiro:\n", i+1);
    scanf("%d", vetor[i]);
  }

//Comparando o inicio do vetor, com meio do vetor em diante e colocando no vetor auxiliar
  while(com1 <= meio && com2 <= fim){
    if (vetor[com1] < vetor[com2]){
      vetor_aux[aux] = vetor[com1];
      com1++;
    }
    else{
      vetor_aux[aux] = vetor[com2];
    }
    aux++;
  }

}