/*75) Faça um algoritmo que leia um número FN, calcule e mostre os N primeiros termos da
sequência de Fibonnaci (0, 1, 1, 2 , 3, 5, 8, ...). O valor lido para N sempre será maior ou
igual a 2. */

#include<stdio.h> 
#include<math.h>
#include<string.h>
#include <locale.h>
#include <windows.h>


int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);
    
    int n_fibo=0, a = 0, b = 1, c = 0, d = 0;
    printf("Informe um número para o cálculo da sequência (O número deverá ser maior ou igual a 2): \n");
    scanf("%d", &n_fibo);
    
    if (n_fibo < 2){
        printf("Informe um número maior ou igual a 2.\n");

    }
    else 
    {
        while (n_fibo > 0)
        {
            printf("%d, ", c);
            a = c;
            c = a + b;
            b = a;
            n_fibo--;
        }
    }
    
}