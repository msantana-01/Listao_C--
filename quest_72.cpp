/*
72) Escreva um algoritmo que leia um número n (número de termos de uma progressão
aritmética), a1 (o primeiro termo da progressão) e r (a razão da progressão) e escreva os
n termos desta progressão, bem como a soma dos elementos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale>
#include <windows.h>

int main()

{   
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    int qtd, prim, razao, soma = 0;

    printf ("Informe quantidade de termos da progressão: ");
    scanf("%d", &qtd);
    printf ("Informe o primeiro termo da progressão: ");
    scanf("%d", &prim);
    printf ("Informe a razão da progressão: ");
    scanf("%d", &razao);

    while(qtd > 0)
    
    {
        soma = soma+prim;
        prim = prim+razao;
        qtd = qtd-1;
        printf ("\nTermo: %d Valor: %d", prim, soma);
    
    }

    printf ("\nA soma da progressão aritmética: %d \n", soma);
      
}
