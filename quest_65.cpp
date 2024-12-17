/* 65) Construa um algoritmo que, para a progressão geométrica 3; 9; 27; 81; ...; 6561,
determine a soma de seus termos. Construa o algoritmo de maneira a não utilizar a
fórmula de soma dos termos. Faça com que o computador gere cada um dos termos a
ser somado.
Ex.: 3; 9; 27; 81; 243; 729; 2187; 6561 => 9840
*/

#include<stdio.h> 
#include<math.h>
#include<locale.h>
#include<windows.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    int i = 1, soma = 0;
    float numero = 0;

    printf("Gerando o valor da Progressão Geométrica de 3 9 27 81 243 729 2187 6561.");

    while(i <= 8){
        numero = pow(3, i);
        soma = soma + (int)numero;
        i = i + 1;
        //soma += (int)numero;
        //i++;
    }

    printf("\nSoma da Progressao Geométrica: %i", soma);
}