#include <stdio.h>

/*
1. Faça um Programa que leia um vetor de 5 números inteiros e mostre-os.
*/

int main()
{
    const int numero = 10; // constante 
    int valor [numero];

    for (int i = 0; i < numero; i++)
    {
         printf("Digite o valor %i: ", i + 1 );
         scanf("%i",&valor[i]);
    }

    printf(" \nValores: \n");

    for (int i = numero-1; i >= 0; i--)
    {        
         printf("Valor %i: %i\n", i+1 , valor[i]);
    }

    return 0;   
}
