/*81) Faça um Programa que leia um vetor de 10 caracteres, e diga quantas consoantes
foram lidas. Imprima as consoantes. */

#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>
#include<iostream>
#include<windows.h>


int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    char vetor[10], consoante_registrada[10];
    int vogal = 0, consoante = 0;

    printf("Digite um vetor de 10 caracteres: ");
    scanf("%s", vetor);

    for (int i = 0; vetor[i] != '\0'; ++i) {
        if (vetor[i] == 'a' || vetor[i] == 'e' || vetor[i] == 'i' ||
            vetor[i] == 'o' || vetor[i] == 'u' || vetor[i] == 'A' ||
            vetor[i] == 'E' || vetor[i] == 'I' || vetor[i] == 'O' ||
            vetor[i] == 'U') {
            ++vogal;
        } else if ((vetor[i] >= 'a' && vetor[i] <= 'z') || (vetor[i] >= 'A' && vetor[i] <= 'Z')) {
            ++consoante;
            consoante_registrada[i] = vetor[i];
            printf("\nAs consoantes registradas foram: %c", consoante_registrada[i]);
        } 
    }

    printf("\nA quantidade de consoantes é de: %d", consoante);
    printf("\nA quantidade de vogais é de: %d", vogal);
    
   
}
  
 