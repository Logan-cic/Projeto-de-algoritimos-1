#include <stdio.h>
#include <stdlib.h>

int main(){
	float valor = 1;
	float alimentacao = 0, limpeza = 0, higiene = 0;
	char codigo;
  printf("INSIRA 0 NO CODIGO E NO VALOR DA\n MERCADORIA PARA ENCERRAR O PROGRAMA.");
	while(valor != 0){
		printf("\nDigite o codigo da mercadoria: ");
		scanf("%c", &codigo);
		getchar();
		printf("Digite o valor: ");
		scanf("%f", &valor);
		getchar();
		switch(codigo){
      
      case 'l': limpeza += valor; break;
			case 'L':limpeza += valor; break;

      case 'a':alimentacao += valor; break;
			case 'A':alimentacao += valor; break;
      
      case 'h':higiene += valor; break;
			case 'H':higiene += valor; break;
		}
	}
	printf("\n\nTotal de gasto alimentacao: R$%.2f ", alimentacao);
	printf("\nTotal de gasto Limpeza: R$%.2f ", limpeza);
	printf("\nTotal de gasto Higiene: R$%.2f ", higiene);
	printf("\nTotal de gastos geral: R$%.2f \n", (alimentacao + limpeza + higiene));
	return 0;
}