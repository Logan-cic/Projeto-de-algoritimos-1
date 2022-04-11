#include <stdio.h>

int main(void) {

  int vetorA[10];
  int vetorB[10], i, temp;

  for(i = 0; i < 10; i++){
		vetorA[i] = rand()%10;
	}
  for(i = 0; i < 10; i++){
		vetorB[i] = rand()%10;
	}
 
    printf("\n\n\tvalores de vetor A\n\n");
	for(i = 0; i <= 10; i++){
    printf("[%1d]", vetorA[i]);
    }  
    printf("\n\n\tvalores de vetor B\n\n");  
  for(i = 0; i <= 10; i++){
    printf("[%1d]", vetorB[i]);
    }
  
  for(i = 0;  i < 10; i++){
		temp = vetorA[i];
		vetorA[i] = vetorB[i];
		vetorB[i] = temp;
	}

	  printf("\n\nVetor A = B\n\n");
	for(i = 0; i < 10; i++){
		printf("[%d] ", vetorA[i]);
	}
  
	  printf("\n\nVetor B = A\n\n");
	for(i = 0; i < 10; i++){
		printf("[%d] ", vetorB[i]);
	}

  return 0;
}
