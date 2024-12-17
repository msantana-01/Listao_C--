/*77) Faça um algoritmo que leia informações de alunos (Matricula, nota_1, nota_2 ,
nota_3) com o fim das informações indicado por Matricula = 9999 . Para cada aluno deve ser
calculada a média final de acordo com a seguinte fórmula:
Média final = [(2 * nota_1) +(3* nota_2) +(4* Nota 3)] / 9
Se a média final for igual ou superior a 5, o algoritmo deve mostrar Matrícula, Média Final
e a mensagem "APROVADO" ; se a média final for inferior a 5, o algoritmo deve mostrar
Matricula, Média Final e a mensagem "REPROVADO".
Ao final devem ser mostrados o total de aprovados, o total de alunos da turma e o total
de reprovados. */

#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>
#include<iostream>
#include<windows.h>


int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    int matricula, qtdAprovados = 0, qtdReprovados = 0;
    float media, nota_1, nota_2, nota_3;

    printf ("Digite a matrícula: ");
    scanf ("%d", &matricula);

    if (matricula != 9999)
    {
        do
        {
            printf ("Digite a nota 1: \n");
            scanf ("%f", &nota_1);
            printf ("Digite a nota 2: \n");
            scanf ("%f", &nota_2);
            printf ("Digite a nota 3: \n");
            scanf ("%f", &nota_3);

            media = ((nota_1 * 2) + (nota_2 * 3) + (nota_3 * 4)) / 9;

            if(media >= 5)
            {
                printf ("Matrícula: %d Média: %.2f Aprovado!\n", matricula, media);
                qtdAprovados++;
            }
            else
            {
                printf ("Matrícula: %d Média: %.2f Reprovado!\n", matricula, media);
                qtdReprovados++;
            }
            printf ("Digite a matrícula: ");
            scanf ("%d", &matricula);
        } 
        while(matricula != 9999);
    }
    
    
    printf ("\nQuantidade de alunos aprovados: %d", qtdAprovados);
    printf ("\nQuantidade de alunos reprovados: %d", qtdReprovados);
}
  

    
