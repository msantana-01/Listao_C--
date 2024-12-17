/* 60)  Faça um algoritmo que leia um conjunto de dados numéricos (X) e imprima o maior (Máximo) dentre eles. 
Admita que o valor 9999 é utilizado como sentinela. */

#include<stdio.h> 
#include<locale.h>
#include<windows.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

int numero=0, max=0;

    do
    { 
        printf("Digite um número (para encerrar digite 9999):\n");
        scanf("%d", &numero);
        
        if (numero != 9999)
        {
            if (max < numero)
            max = numero;
            
        }
    }
    while (numero != 9999);
    
    printf ("O maior número digitado foi %d.\n", max);
      
}