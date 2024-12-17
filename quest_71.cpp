/*71) Chico tem 1,50 metros e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metros e
cresce 3 centímetros por ano. Construa um algoritmo que calcule e imprima quantos
anos serão necessários para que Zé seja maior que Chico */

#include <stdio.h>
#include <stdlib.h>
#include <locale>
#include <windows.h>

int main()

{   
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    float chico = 1.5, ze = 1.1;
    int ano = 0;

    while(chico>=ze)
    {
        chico = chico + 0.02;
        ze = ze + 0.03;
        ano++;
        printf("Chico: %.2f\tZé: %.2f\tAno: %d\n", chico, ze, ano);
    }
    printf("\nO tempo necessário para que Zé seja maior que Chico será de %d anos!\n", ano);
}