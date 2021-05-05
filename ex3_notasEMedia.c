#include <stdio.h>

/*
3. Faça um Programa que leia 4 notas, mostre as notas e a média na tela.
*/

int main()
{
    const int numero = 4; 
    int notas [numero];
    int somatorio = 0 ;

    for (int i = 0; i < numero; i++)
    {
        printf("Digite o valor da nota %i: ", i + 1 );
        scanf("%i",&notas[i]);
        somatorio += notas[i];
    }
    
    for (int i = 0; i < numero; i++)
    {        
        printf("Valor da nota %i: %i\n", i + 1, notas[i]);
    }

    printf("Media das notas: %i\n", somatorio / numero);

    return 0;   
}
