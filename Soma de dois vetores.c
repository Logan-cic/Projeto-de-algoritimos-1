#include <stdio.h>

int main(void) {

  int soma, a, b, i, vet[13];

  soma = 0;

  for (i = 0; i < 12; i=i+1){
    printf("\nInsira um numero na posição [%d]: ", i+1);
    scanf("%d", &vet[i]);
  }
  
    printf("\nEscolha uma posiçao do vetor para somar: %d", a);
    scanf("%d", &a);
    printf("\nEscolha uma posiçao do vetor para somar: %d", b);
    scanf("%d", &b);

  soma = vet[a] + vet[b];

  printf("A soma dos vetores e: %d", soma);
   
  return 0;
}