/*74) Faça um algoritmo que leia um número inteiro N, calcule e mostre o maior quadrado
menor ou igual a N.
Por exemplo, se N for igual a 38, o Menor quadrado é 36 (quadrado de 6). */

#include<stdio.h> 
#include<math.h>
#include<string.h>
#include <locale.h>
#include <windows.h>


int impar=1, numero=0, contador=0, raiz=0;

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    printf("Informe o número que você deseja obter a raiz: \n");
    scanf("%d", &numero);
    
    raiz = numero;
    
    while (numero>0) 
    {         
        numero = numero - impar;    
        impar = impar+2;
        contador = contador +1;    
    }

    if (numero<0)
    {
    contador = (contador -1) * (contador-1);
    printf("O menor número quadrado de %d é: %d ", raiz,contador);    
    }
    
    else
    { 
    printf("O número %d que foi informado possui uma raiz exata que é de: %d ", raiz,contador);
    
    }
    
}
    