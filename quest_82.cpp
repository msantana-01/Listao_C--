/*82) Faça um Programa que leia 20 números inteiros e armazene-os num vetor. Armazene os
números pares no vetor PAR e os números IMPARES no vetor ímpar. Imprima os três
vetores. */

#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>
#include<iostream>
#include<windows.h>


int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    int i, num[20], par[20], impar[20],x=0,y=0;

    printf("Digite 20 números inteiros:\n");

    for (i=0; i<20; i++) 
    { printf("Número %d: ", i+1);
      scanf("%d",&num[i]);
    } 

    for (i=0; i<20; i++)
    {
        if(num[i]%2 == 0)
        {
            par[x]=num[i];
            x++; 
        }
        else 
        {
            impar[y]=num[i];
            y++; 
        }
     }

    printf("\nOs números digitados foram:\n"); 
    for (i=0; i<20; i++)
         printf("%d, ",num[i]);

    if (x != 0)
    {
        printf("\nOs números pares digitados foram:\n"); 
        for (i=0; i<x; i++)
        printf("%d, ",par[i]);
    }
    else 
    {
        printf("\nNão foram digitados números pares!");
    }

    if (y != 0)
    {
        printf("\nOs números ímpares digitados foram:\n");
        for (i=0; i<y; i++)
        printf("%d, ",impar[i]);
    }
    else 
    {
        printf("\nNão foram digitados números ímpares!");
    }
    
}

  
   