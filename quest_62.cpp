/* 62) Faça um algoritmo que leia um conjunto de números (X) e imprima a quantidade de
números pares (QPares) e a quantidade de números impares
(QImpares) lidos. Admita que o valor 9999 é utilizado como sentinela para fim de leitura.
Ex.: 1,2,3,4,5 => Pares=2 Impares=3
*/

#include<stdio.h> 
#include<locale.h>
#include<windows.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

int numero, impar=0, par=0; 

do
{
printf("Digite um conjunto de números (para encerrar digite 9999):\n");
scanf("%i", &numero);

    if (numero != 9999)
    {
        if(numero % 2 == 0)
            {
                par++;
            }
        else
            {
                impar++;
            }
    }
}
while (numero != 9999);
    
printf ("A quantidade de números pares digitados foi de %i.\n", par);
printf ("A quantidade de números ímpares digitados foi de %i.\n", impar);
      
}