/* 58)  Um determinado material radioativo perde metade de sua massa a cada 50 segundos. 
Dada a massa inicial, em gramas, faça um programa que determine o tempo necessário para que 
essa massa se torne menor que 0,05 gramas. */

#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

float massa_inicial, segundos;

printf("Digite a massa inicial (em gramas) do elemento radioativo:\n");
scanf("%f", &massa_inicial);

if (massa_inicial >0)
    { 
        while (massa_inicial > 0.05)
        {
            massa_inicial = massa_inicial /2;
            segundos = segundos + 50;
        }
        printf("O tempo necessário para que essa massa inicial se torne menor que 0.05 gramas é de: %.0f segundos.\n", segundos);
    }
else
    printf("A massa digitada é inválida!\n");
    system("pause");
}