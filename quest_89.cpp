/*89) Faça um programa que leia um número indeterminado de valores, correspondentes a
notas, encerrando a entrada de dados quando for informado um valor igual a -1 (que
não deve ser armazenado). Após esta entrada de dados, faça:
a. Mostre a quantidade de valores que foram lidos;
b. Exiba todos os valores na ordem em que foram informados, um ao lado do outro;
c. Exiba todos os valores na ordem inversa à que foram informados, um abaixo do outro;
d. Calcule e mostre a soma dos valores;
e. Calcule e mostre a média dos valores;
f. Calcule e mostre a quantidade de valores acima da média calculada;
g. Calcule e mostre a quantidade de valores abaixo de sete;
h. Encerre o programa com uma mensagem;*/

#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>
#include<iostream>
#include<windows.h>


int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    int i, abaixo_sete=0, cont=0, cont_acima_media=0;
    float numeros[99999], soma=0, media=0;

   
    printf("Digite os números: \n"); 
    for (i=0; i<99999; i++) {
    scanf("%f", &numeros[i]);
    if (numeros[i] == -1)
    break;
    else 
    {
    soma = soma + numeros[i]; 
    cont++;
    }
    
    }
    media = soma / cont;
    for(i=0; i<cont; i++)
        if (numeros[i] > media)
        cont_acima_media++;
    
    for(i=0; i<cont; i++)
        if (numeros[i] < 7)
        abaixo_sete++;
    
    printf("\nA quantidade de valores que foram lidos foi de: %d \n", cont); 
    
    printf("Os números informados foram:\n"); 
    for(i=0; i<cont; i++) 
    printf("%.2f ", numeros[i]); 
    
    printf("\nOs números informados em forma inversa foram:\n"); 
    for(i=0; i<cont; i++) 
    printf("%.2f\n", numeros[cont-1-i]); 

    printf("A soma dos números é de %.2f\n", soma); 
    printf("A média dos números é de %.2f\n", media);
    printf("A quantidade de valores acima da média calculada: %d\n", cont_acima_media);
    printf("A quantidade de valores abaixo de sete: %d\n", abaixo_sete);
    printf("O programa foi encerrado...");
}
  
