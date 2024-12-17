/* 64) Foi feita uma pesquisa com um grupo de alunos de uma universidade, na qual se
perguntou para cada aluno o número de vezes que utilizou o restaurante da
universidade no último mês. Construa um algoritmo que determine:
a) O percentual de alunos que utilizaram menos que 10 vezes o restaurante;
b) O percentual de alunos que utilizaram entre 10 e 15 vezes;
c) O percentual de alunos que utilizaram o restaurante acima de 15 vezes.
Ex.: 2, 3, 11, 12, 21, 22, 23 = a) 28%; b) 28%; c) 42%
*/

#include<stdio.h> 
#include <math.h>
#include<locale.h>
#include<windows.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    int alunos_qtde, restaurante_qtde, menor10 = 0, entre1015 = 0, maior15 = 0;
    float percMenor10, percEntre1015, percMaior15, total_geral;

    printf("Informe a quantidade de alunos a serem pesquisados: ");
    scanf("%i", &alunos_qtde);

    while(alunos_qtde > 0)
    {
        printf("Quantas vezes o aluno usou o refeitório? ");
        scanf("%i", &restaurante_qtde);

        if(restaurante_qtde < 10)
        {
            menor10 = menor10 + 1;

        }
        
        else if(restaurante_qtde >= 10 && restaurante_qtde < 16)
        
        {
            entre1015 = entre1015 + 1;
        }
        else
        {
            maior15 = maior15 + 1;
        }

        total_geral = total_geral + 1;
        alunos_qtde = alunos_qtde - 1;
    }

    percMenor10 = (menor10 / total_geral) * 100;
    percEntre1015 = (entre1015 / total_geral) * 100;
    percMaior15 = (maior15 / total_geral) * 100;

    printf("O percentual de alunos que utilizaram menos que 10 vez o restaurante foi de: %.2f%%\n", percMenor10);
    printf("O percentual de alunos que utilizaram entre 10 e quinze vezes o restaurante foi de: %.2f%%\n", percEntre1015);
    printf("O percentual de alunos que utilizaram mais de 15 vezes foi de: %.2f%%\n", percMaior15);
       
}