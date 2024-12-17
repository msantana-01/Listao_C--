/* 59) Faça um algoritmo que leia um conjunto de números (X) e imprima sua soma (Soma) e
sua média (Media). Admita que o valor 9999 é utilizado como sentinela para fim de
leitura.
Ex.: 1, 2, 3 => Soma=6 Media=2 */

#include<stdio.h> 
#include<locale.h>
#include<windows.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

float soma=0, numeros=0, media=0;

    do
    { 
        printf("Digite o conjunto de números (para encerrar digite 9999):\n");
        scanf("%f", &numeros);
        
        if (numeros != 9999)
        {
            soma = soma + numeros;
            media++;
        }
    }
    while (numeros != 9999);
    
    printf ("A soma dos números é de %.2f.\n", soma);
    printf ("A média dos números é de %.2f.\n", soma/media);
   
}