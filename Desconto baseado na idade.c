#include <stdio.h>
#include <stdlib.h>

int main()
{
   int idade, valor;
   float total;

    printf("Qual a sua idade? ");
    scanf("%d", &idade);

    printf("Agora informe o valor da sua conta: ");
    scanf("%d", &valor);

    if (valor>300){
        total = valor * 0.25;
        printf("O valor a ser pago é R$%2.f", total);
    }

    else
        if((valor <= 300 || valor >= 100) && idade > 50){
            total = valor * 0.15;
            printf("O valor a ser pago é R$%2.f", total);
        }

    else
        if(valor < 100){
        printf("O valor a ser pago é R$%d", valor);
        }

    return 0;
}
