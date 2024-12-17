/* 63) Faça um algoritmo que calcule e imprime a soma dos inteiros de 1 a 10. Utilize as
estruturas ENQUANTO-FACA / REPITA-FACA para fazer um laço com as instruções de
cálculo e incremento. O laço deve terminar quando o valor de x se tornar 11.
*/

#include<stdio.h> 
#include<locale.h>
#include<windows.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

int soma=0, incremento=0; 

while (incremento < 11)
    {
    soma = soma + incremento;
    incremento++;
    }


    
printf ("A soma de números inteiros de 1 a 10 é %i.\n", soma);
      
}