/*85) Faça um Programa que leia um vetor A com 10 números inteiros, calcule e mostre a
soma dos quadrados dos elementos do vetor. */

#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>
#include<iostream>
#include<windows.h>


int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    int i, numeros[10], soma=0;

    for(i=0; i<10; i++) 
    { 
    printf("Qual o %d° número?\n", i+1); 
    scanf("%d", &numeros[i]);
    soma = soma + (numeros[i] * numeros[i]); 
    } 
    
    printf("\nOs números informados foram:\n"); 
    for(i=0; i<10; i++) 
    printf("Número %d: %d\n", i+1, numeros[i]); 
    printf("A soma dos quadrados dos elementos do vetor é de %d\n", soma); 
    
}

  
   