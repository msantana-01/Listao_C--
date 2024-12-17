/*76) Foi realizada uma pesquisa de algumas características físicas da população de uma certa região, a qual coletaram os seguintes dados referentes a cada habitante para serem analisados:
- sexo (masculino e feminino) - cor dos olhos (azuis, verdes ou castanhos)
- cor dos cabelos (louros, castanhos, pretos) - idade
Faça um algoritmo que determine e escreva:
a) a maior idade dos habitantes;
b) a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos,inclusive;
c) a quantidade de indivíduos que tenham olhos verdes e cabelos louros;
O final do conjunto de habitantes é reconhecido pelo valor -1 informado como idade. */

#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>
#include<iostream>
#include<windows.h>


int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    int idade = 0, maior_idade = 0, olhos_cabelos = 0, quantidade_18_35 = 0;
    char sexo[10], cor_olhos[10], cor_cabelos[10];

    while (idade != -1)
    {
        printf("Informe o sexo (f ou m): \n");
        scanf("%10s", sexo);
        printf("Qual a cor dos olhos (azuis, verdes ou castanhos): \n");
        scanf("%10s", cor_olhos);
        printf("Qual a cor dos cabelos (louros, castanhos, pretos): \n");
        scanf("%10s", cor_cabelos);
        printf("Qual a idade do indivíduo? (digite -1 para encerrar) \n");
        scanf("%d", &idade);

        if (idade > maior_idade){
            maior_idade = idade;
        }

        if(strcmp(sexo,"f")==0){
            if (idade >= 18 && idade <= 35)
            quantidade_18_35++;
        }

        if(strcmp(cor_olhos,"verdes")==0){
            if (strcmp(cor_cabelos,"louros")==0)
            olhos_cabelos++;
        }
    } 
printf("A maior idade entre os habitantes é de: %d\n", maior_idade);
printf("A quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos é de %d\n", quantidade_18_35);
printf("A quantidade de indivíduos que tem olhos verdes e cabelos louros é de: %d\n", olhos_cabelos);
  
}
    
