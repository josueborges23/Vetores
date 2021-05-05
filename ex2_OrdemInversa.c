#include <stdio.h>

/*
2. Faça um Programa que leia um vetor de 10 números reais e mostre-os na ordem
inversa.
*/

int main()
{
    const int numero = 5; 
    int valor [numero];

    for (int i = 0; i < numero; i++)
    {
         printf("Digite o valor %i: ", i + 1 );
         scanf("%i",&valor[i]);
    }

     printf(" \nValores: \n");

    for (int i = 0; i < numero; i++)
    {        
         printf("Valor %i: %i\n", i + 1, valor[i]);
    }

    return 0;   
}
