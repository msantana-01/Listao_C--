/*81) Faça um Programa que leia um vet|| de 10 caracteres, e diga quantas consoantes
f||am lidas. Imprima as consoantes. */

#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>
#include<iostream>
#include<windows.h>


int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    int i, soma_consoante=0; 
    char caracteres[10], consoantes[10];

    for (i=0; i<10; i++) 
    { 
    printf("Qual o %d⁰ caractere?\n", i+1); 
    scanf("%s", &caracteres[i]); 
   
    if((caracteres[i] != 'a') || (caracteres[i] != 'A') || (caracteres[i] != 'e') || (caracteres[i] != 'E') || (caracteres[i] != 'i') || (caracteres[i] != 'I') || (caracteres[i] != 'o') || (caracteres[i] != 'O') || (caracteres[i] != 'u') || (caracteres[i] != 'U'))
        soma_consoante++;
        
    } 
    printf("\nO número de consoantes lidas foi de %d\n", soma_consoante); 
   

}
  
 