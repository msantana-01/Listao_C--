/* 69) Faça um algoritmo que leia um número e divida-o por dois (sucessivamente) ate que o
resultado seja menor que 1. Mostre o resultado da ultima divisão e a quantidade de
divisões efetuadas.
*/

#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

int contador = 0;
float numero;

printf ("Digite um número: ");
scanf("%f", &numero);

while (numero > 1)
{
    numero = numero / 2;
    contador++;
}

    printf("O resultado da última divisão é: %.2f\n", numero);
    printf("A quantidade de divisões foi de: %d\n", contador);

}