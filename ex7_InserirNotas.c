#include <stdio.h>
#include <string.h>

/*
Faça um Programa que peça as quatro notas de 10 alunos, calcule e armazene num
vetor a média de cada aluno, imprima o número de alunos com média maior ou igual
a 7.0.
*/
int contagem=0;

int main()
{
    int valores[0];

    int valor = 0;
    

    while (valor != -1){
        
        printf("Insira um valor %i: \n");
        scanf("%i", &valor);

        if(valor != -1)
        {
        valores[contagem+1] = redimensionaVetor(valores);
        valores[contagem] =  valor;
        contagem++;       
        }

    }
}

int [] redimensionarVetor(int [] vetor)
{
    int novoVetor[contagem + 1];
    for (int i = 0; i < contagem; i++)
    {
        novoVetor[i] = vetor[i];
    }    
}
