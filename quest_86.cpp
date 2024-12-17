/*86) Faça um Programa que leia dois vetores com 10 10 cada. Gere um terceiro vetor
de 20 10, cujos valores deverão ser compostos pelos 10 intercalados
dos dois outros vetores.*/

#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>
#include<iostream>
#include<windows.h>


int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    int vetor1[10], vetor2[10], vetor3[20], i, j;

    for (i = 0; i < 10; i++)
    {
        printf("Entre com o %d° numero inteiro para o vetor 1: ", i + 1);
        scanf("%d", &vetor1[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("Entre com o %d⁰ numero inteiro para o vetor 2: ", i + 1);
        scanf("%d", &vetor2[i]);
    }
    for (i = 0, j = 0; i < 10; i++)
    {
        vetor3[j] = vetor1[i];
        vetor3[j+1] = vetor2[i];
        j = j+2;
    }
    printf("\nO terceiro vetor com os 10 números intercalados dos vetores 1 e 2 é:\n");
    for (i = 0; i < 20; i++)
        printf("%d ", vetor3[i]);
    
}  