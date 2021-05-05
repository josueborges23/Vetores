#include <stdio.h>
#include <string.h>

/*
4. Faça um Programa que leia um vetor de 10 caracteres, e diga quantas consoantes
foram lidas. Imprima as consoantes.
*/

int main()
{
    const int numero = 10; 
    char caracteres [numero];


    for (int i = 0; i <= numero; i++)
    {
        printf("Digite um caractere: \n");
        scanf("%c", &caracteres[i]);
        fflush(stdin);
    }
   
    int qtdCaracteres = strlen(caracteres);
    char caractere;

    // printf("Quantidade de caracteres: %i\n", qtdCaracteres);

    printf("Consoantes: \n");

    for (int i = 0; i < qtdCaracteres - 1; i++)
    {        
        caractere = toupper(caracteres[i]);
        if( caractere != 'A' && 
            caractere != 'E' && 
            caractere != 'I' && 
            caractere != 'O' &&
            caractere != 'U')
        {
            printf("%c ", caracteres[i]);
        }           
    } 

    return 0;   
}
