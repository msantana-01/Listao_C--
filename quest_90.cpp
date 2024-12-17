/*90) Em uma competição de salto em distância cada atleta tem direito a cinco saltos. O
resultado do atleta será determinado pela média dos cinco valores restantes. Você deve
fazer um programa que receba o nome e as cinco distâncias alcançadas pelo atleta em
seus saltos e depois informe o nome, os saltos e a média dos saltos. O programa deve
ser encerrado quando não for informado o nome do atleta. A saída do programa deve
ser conforme o exemplo abaixo:

Atleta: Rodrigo Curvêllo
Primeiro Salto: 6.5 m
Segundo Salto: 6.1 m
Terceiro Salto: 6.2 m
Quarto Salto: 5.4 m
Quinto Salto: 5.3 m
Resultado final:
Atleta: Rodrigo Curvêllo
Saltos: 6.5 – 6.1 – 6.2 – 5.4 – 5.3
Média dos saltos: 5.9 m*/

#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>
#include<iostream>
#include<windows.h>
#include<string.h>


int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    int i;
    float saltos[5], soma=0, media=0;
    char nome[30];
   
    while (nome[0] != '\n')
    {
    printf("Digite o nome do atleta: \n");
    fgets( nome, 30, stdin );
    if (nome[0] == '\n')
    break;
    else
    printf("Informe as notas dos saltos do atleta: \n"); 
    for (i=0; i<5; i++) 
        {
        scanf("%f", &saltos[i]);    
        soma = soma + saltos[i]; 
        }
    
    media = soma / 5;
    printf("\nAtleta: %s\n", nome); 
    printf("Primeiro Salto: %.1fm\n", saltos[0]); 
    printf("Segundo Salto: %.1fm\n", saltos[1]);
    printf("Terceiro Salto: %.1fm\n", saltos[2]);
    printf("Quarto Salto: %.1fm\n", saltos[3]);
    printf("Quinto Salto: %.1fm\n", saltos[4]);
    
    printf("Saltos: "); 
    for(i=0; i<4; i++)
        {
        printf("%.1f - ", saltos[i]); 
        }
    printf("%.1f", saltos[4]); // Colocado fora do loop para não imprimir o último " - " após o valor do quinto salto.
    printf("\nMédia dos saltos: %.1fm\n", media); 
    getchar();
    }
  
}