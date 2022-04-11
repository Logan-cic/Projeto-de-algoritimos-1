#include <stdio.h>

int main() {

  int i;
  float soma=0, media, vet[10];
    
  for (i = 0; i < 10; i=i+1){
    printf("Insira a nota %d: ", i+1);
    scanf("%f", &vet[i]);
    soma = soma + vet[i];
    }

  media = soma/10;
  
  printf("A media das notas é: %.2f ", media);

  
  return 0;
}