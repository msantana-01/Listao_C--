/* 61) Faça um algoritmo que leia dois números inteiros positivos (Num1 e Num2) e imprima o quociente (Quoc) 
e o resto (Resto) da divisão de Num1 por Num2, utilizando apenas as operações de adição e subtração.
 */

#include<stdio.h> 
#include<locale.h>
#include<windows.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

int dividendo, divisor; 
float quociente=0;

printf("Digite um número inteiro positivo:\n");
scanf("%i", &dividendo);
printf("Digite um segundo número inteiro positivo:\n");
scanf("%i", &divisor);

    while (dividendo >= divisor)
    { 
    quociente = quociente + 1;
    dividendo = dividendo - divisor;
    }
    
    
printf ("O quociente é %.0f.\n", quociente);
printf ("O resto é %i.\n", dividendo);
      
}