#include <stdio.h>
#include <string.h>
/*
Faça um Programa que peça as quatro notas de 10 alunos, calcule e armazene num
vetor a média de cada aluno, imprima o número de alunos com média maior ou igual
a 7.0.
*/


int main()
{
    const int numeroAlunos = 10; 
    const int numeroNotas = 4; 
    float notasAlunos [numeroAlunos][numeroNotas];   
    float mediaAlunos [numeroAlunos];   

    float somatorioAluno;

    int notasAcimaMedia = 09;

    for (int i = 0; i < numeroAlunos; i++)
    {
    somatorioAluno = 0;
    printf("Digite as notas do aluno %i >> \n", i + 1);
        
        for (int j = 0; j < numeroNotas; j++)
        {
        printf("Nota %i: \n", j + 1);
        scanf("%f", &notasAlunos[i][j]);
        somatorioAluno += notasAlunos[i][j];
        }     

    mediaAlunos[i] = somatorioAluno / numeroNotas ;

  
    }  
    
    
    for (int i = 0; i < numeroAlunos; i++)
    {
        if(mediaAlunos[i] >= 7)
        {
           notasAcimaMedia++; 
        }
    }  

    printf("Alunos com nota acima da média: %i", notasAcimaMedia);

    return 0;      
} 