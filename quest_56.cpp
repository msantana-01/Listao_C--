/* 56) Crie um algoritmo que solicita ao usuário para digitar um número e mostra-o por
extenso. Este número deve variar entre 1 e 10. Se o usuário introduzir um número que
não está neste intervalo, mostre: "Número inválido" */

#include<stdio.h> 
#include<stdlib.h>
#include <locale.h>
#include <windows.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);
    
    int numero;

    printf("Digite um número entre 1 e 10.\n");
    scanf("%d", &numero);
    switch (numero) {
        case 1: printf("O número digitado é UM.\n");
        break;
        case 2: printf("O número digitado é DOIS.\n");
        break;
        case 3: printf("O número digitado é TRÊS.\n");
        break;
        case 4: printf("O número digitado é QUATRO.\n");
        break;
        case 5: printf("O número digitado é CINCO.\n");
        break;
        case 6: printf("O número digitado é SEIS.\n");
        break;
        case 7: printf("O número digitado é SETE.\n");
        break;
        case 8: printf("O número digitado é OITO.\n");
        break;
        case 9: printf("O número digitado é NOVE.\n");
        break;
        case 10: printf("O número digitado é DEZ.\n");
        break;
        default: printf("O número digitado é INVÁLIDO.\n"); 
        break;  

    }
system("pause\n");
    
    
}