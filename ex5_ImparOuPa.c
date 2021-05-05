#include <stdio.h>
#include <string.h>

/*
5. Faça um Programa que leia 20 números inteiros e armazene-os num vetor.
Armazene os números pares no vetor PAR e os números IMPARES no vetor impar.
Imprima os três vetores.
*/

void imprimeNumerosEmLista( int numeros[] );

const int numero = 5; 

int main()
{

    int todosOsNumeros [numero];
    int numerosPares [numero];
    int numerosImpares [numero];

    int contadorPares = 0;
    int contadorImpares = 0;


    for (int i = 0; i < numero; i++)
    {
        printf("Digite um valor: \n");
        scanf("%i", &todosOsNumeros[i]);
        
            if(todosOsNumeros[i] % 2  == 0){
                printf("Inserindo o valor %i em par \n", todosOsNumeros[i]);
                numerosPares[contadorPares] == todosOsNumeros[i];
                contadorPares++;
            }
            else
            {
                printf("Inserindo o valor %i em impar \n", todosOsNumeros[i]);
                numerosImpares[contadorImpares] == todosOsNumeros[i];
                contadorImpares++;
            }
    }   

    imprimeNumerosEmLista(todosOsNumeros);
    imprimeNumerosEmLista(numerosPares);
    imprimeNumerosEmLista(numerosImpares);

    return 0;   
   
} 

void imprimeNumerosEmLista( int numeros[] )
{
    //int qtdNumeros = sizeof numeros / sizeof *numeros;
    printf("qtdNumeros: %i\n", numero);

    for (int i = 0; i < numero; i++)
    {        
        printf("%i ", numeros[i]);
    }  

    printf("\n");
}
  

