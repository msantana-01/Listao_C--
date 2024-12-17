/*87) Foram anotadas as idades e alturas de 30 alunos. Faça um Programa que determine
quantos alunos com mais de 13 anos possuem altura inferior à média de altura desses
alunos.*/

#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>
#include<iostream>
#include<windows.h>


int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    int i, idade[30], qtde_baixos =0; 
    float altura[30], soma_altura=0, media_altura=0;

    for(i=0; i<5; i++) 
    { 
    printf("Qual a idade do %d⁰ aluno?\n", i+1); 
    scanf("%d", &idade[i]); 
    printf("Qual a altura do %d⁰ aluno?\n", i+1); 
    scanf("%f", &altura[i]);
    soma_altura = soma_altura + altura[i];
    } 
    media_altura = soma_altura / 30;

    for(i=0; i<30; i++)
    {
        if ((altura[i]> media_altura) && (idade[1]>13))
            qtde_baixos++;
    }
    printf("A altura média da turma é de: %.2f\n", media_altura); 
    printf("A quantidade de alunos acima de 13 anos com altura abaixo da média da turma é de: %d\n", qtde_baixos); 
       
}
  
    
