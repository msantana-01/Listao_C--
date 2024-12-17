/*84) Faça um Programa que peça a idade e a altura de 5 pessoas, armazene cada informação
no seu respectivo vetor. Imprima a idade e a altura na ordem inversa a ordem lida. */

#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>
#include<iostream>
#include<windows.h>


int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    int i, idade[5]; 
    float altura[5];

    for(i=0; i<5; i++) 
    { 
    printf("Qual a idade da %dª pessoa?\n", i+1); 
    scanf("%d", &idade[i]); 
    printf("Qual a altura da %dª pessoa?\n", i+1); 
    scanf("%f", &altura[i]);
    } 
    
    printf("\nA ordem inversa das idades é:\n"); 
    for(i=0; i<5; i++) 
    printf("%d\n", idade[4-i]);
    
    printf("\nA ordem inversa das alturas é:\n"); 
    for(i=0; i<5; i++) 
    printf("%.2f\n", altura[4-i]); 

}
  
   