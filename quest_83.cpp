/*83) Faça um Programa que leia um vetor de 5 números inteiros, mostre a soma, a
multiplicação e os números */

#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>
#include<iostream>
#include<windows.h>


int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    int i, numeros[5], soma=0, mult=1;

    for(i=0; i<5; i++) 
    { 
    printf("Qual o %d° número?\n", i+1); 
    scanf("%d", &numeros[i]);
    soma = soma + numeros[i]; 
    mult = mult * numeros[i];
    } 
    
    printf("\nOs números informados foram:\n"); 
    for(i=0; i<5; i++) 
    printf("Número %d: %d\n", i+1, numeros[i]); 
    printf("A soma dos números é de %d\n", soma); 
    printf("A multiplicacão dos números é de %d\n", mult); 
}

  
   