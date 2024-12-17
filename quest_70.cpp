/*
70)Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e escreve o valor de E.
E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / N!
*/

#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    int i, numero;
    float resultado = 1.0, fat = 1.0;

    printf("Digite um número inteiro positivo:\n");
    scanf("%d", &numero);
    
    for(i=1; i<=numero; i++)
    {
        fat = fat * i;
        resultado = resultado + 1.0/fat;
    }
    printf("O valor de E é: %.2f\n", resultado);
}
