/*80) Faça um Programa que leia 4 notas, mostre as notas e a média na tela. */

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
    float nota[4], media;

    for(i=0; i<4; i++) 
    { 
    printf("Qual a %dª nota?\n", i+1); 
    scanf("%f", &nota[i]);
    media = media + nota[i]; 
    } 
    
    printf("\nAs notas informadas são:\n"); 
 
    for(i=0; i<4; i++) 
    printf("Nota %d: %.2f\n", i, nota[i]); 
    
    media = media /4;
    printf("A média das notas foi de %.2f\n", media); 
}
  
   