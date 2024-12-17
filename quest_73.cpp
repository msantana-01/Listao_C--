/* 73) Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados de
idade, sexo (M/F) e salário. Faça um algoritmo que informe:
a) a média de salário do grupo;
b) a maior e a menor idade do grupo;
c) a quantidade de mulheres com salário até R$100,00.
Encerre a entrada de dados quando for digitada uma idade negativa.
*/

#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>
#include<iostream>
#include<strings.h>
#include<windows.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    
    float media_salario, salario, salario_total = 0;
    int idade = 0, idade_menor =0, idade_maior =0, cont = 0, mulheres_100 = 0, teste =0;
    char sexo[1];

    while (idade >= 0) 
    {
        printf("Digite a idade do funcionário: (Para encerrar digite um número negativo) \n");
        scanf("%d", &idade);
        
    if (idade >= 0)
    {
        printf("Digite o sexo do funcionário: (M/F)\n");
        scanf("%s", &sexo);
        printf("Digite o salário do funcionário:\n");
        scanf("%f", &salario);
        if (idade > idade_maior)
        {
            idade_maior = idade;
        }
        if (cont == 0)
        {   
            idade_menor = idade;
        }
        if (idade < idade_menor)
        {
            idade_menor = idade;
        }
        if(strcasecmp(sexo, "F") == 0 && salario <= 100)
        {
            mulheres_100++;
        }
        salario_total = salario + salario_total;
        cont++;
        
    }
   }
    media_salario = salario_total / cont;
    
    printf ("A média salarial é de R$ %.2f\n", media_salario);
    printf ("A maior idade do grupo é: %d\n", idade_maior);
    printf ("A menor idade do grupo é: %d\n", idade_menor);
    printf ("A quantidade de mulheres com salário até R$100,00 é de %.2d\n", mulheres_100);
    
    
}