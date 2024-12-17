/* 68) Faça um algoritmo que calcule a média de salários de uma empresa, pedindo ao usuário
o nome dos funcionários e os salários e devolvendo a média, o salário mais alto e o
salário mais baixo. Use nome = “fim” para encerrar a leitura.
*/

#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>
#include<iostream>
#include<string>
#include<windows.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);
    char nome_funcionario[40];
    float media, salario, salario_total = 0, salario_menor = 0, salario_maior = 0;
    int contador = 0;

    while (strcasecmp(nome_funcionario, "fim") != 0)
    {
        printf("Digite o nome do funcionário: (Para encerrar digite fim) \n");
        scanf("%s", nome_funcionario);

        if (strcasecmp(nome_funcionario, "fim") != 0)
        {
        printf("Digite o salário do funcionário:\n");
        scanf("%f", &salario);

            if (salario > salario_maior)
            {
                salario_maior = salario;
            }

            if (contador == 0)
            {
                salario_menor = salario;
            }

            if (salario < salario_menor)
            {
                salario_menor = salario;
            }

            salario_total += salario;
            contador++;
        }
    }
    media = salario_total / contador;
    printf ("A média salarial é de R$ %.2f\n", media);
    printf ("O maior salário é de R$ %.2f\n", salario_maior);
    printf ("O menor salário é de R$ %.2f\n", salario_menor);

    
}