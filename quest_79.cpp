/*79) Faça um Programa que leia um vetor de 10 números reais e mostre-os na ordem
inversa. */

#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>
#include<iostream>
#include<windows.h>


int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    int i; 
    float valor[10];

    for(i=0; i<10; i++) 
    { 
    printf("Qual o %d⁰ valor?\n", i+1); 
    scanf("%f", &valor[i]); 
    } 
    
    printf("\nA ordem inversa dos valores informados é:\n"); 
 
    for(i=0; i<10; i++) 
    printf("%.2f\n", valor[9-i]); 

}
  
   