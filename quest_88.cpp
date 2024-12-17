/*88) Utilizando listas faça um programa que faça 5 perguntas para uma pessoa sobre um
crime. As perguntas são:
a. “Telefonou para a vítima?”
b. “Esteve no local do crime?”
c. “Mora perto da vítima?”
d. “Devia para a vítima?”
e. “Já trabalhou com a vítima?” O programa deve no final emitir uma classificação
sobre a participação da pessoa no crime. Se a pessoa responder positivamente a 2
questões ela deve ser classificada como “Suspeita”, entre 3 e 4 como “Cúmplice” e 5
como “Assassino”. Caso contrário, ele será classificado como “Inocente”.*/

#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>
#include<iostream>
#include<windows.h>


int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    char resposta;
    int soma = -1;

    printf("Telefonou para a vítima? (S ou N): ");
    scanf(" %c", &resposta);
    if (resposta == 'S' || resposta == 's')
        soma++;
    
    printf("Esteve no local do crime? (S ou N): ");
        scanf(" %c", &resposta);
    if (resposta == 'S' || resposta == 's')
        soma++;
    
    printf("Mora perto da vítima? (S ou N): ");
        scanf(" %c", &resposta);
    if (resposta == 'S' || resposta == 's')
        soma++;
    
    printf("Devia para a vítima? (S ou N): ");
        scanf(" %c", &resposta);
    if (resposta == 'S' || resposta == 's')
        soma++;
    
    printf("Já trabalhou com a vítima? (S ou N): ");
        scanf(" %c", &resposta);
    if (resposta == 'S' || resposta == 's')
        soma++;

    if (soma < 2)
        printf("Inocente");
    else if (soma == 2)
        printf("Suspeita");
    else if (soma < 5)
        printf("Cúmplice");
    else
        printf("Assassino");
       
}