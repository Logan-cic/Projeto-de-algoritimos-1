#include <stdio.h>

int main(void) {

  int i, vetor[10], tab;

  printf("\nIsira a tabuda que voce deseja saber: ");
  scanf("%d", &tab);

  for (i=1; i <= 10; i++){
    vetor[i]= i * tab;
    printf("\tA tabuada do %d é: [%d]\n", tab, vetor[i]);
  }
  return 0;
}