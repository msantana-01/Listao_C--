/* 67) Considere que, para cada um dos hotéis fazenda da região, se tenha registrado o nome
do hotel, a sua distância do centro da cidade, o número médio de visitantes no último
feriado e o tipo de acesso ao hotel (0 – acesso não asfaltado; 1 – acesso asfaltado).
Construa um algoritmo que forneça:
a) O número de hoteis que distam mais de 15km do centro;
b) A quantidade média de visitantes no último feriado, nos hoteis com acesso não
asfaltado;
c) O nome e a distância do centro em Km, de todos os hoteis de acesso asfaltado que
tiveram menos de 1.000 visitantes.
Ex.: HA, DA=10, V=100, AC=0
HB, DA=20, V=50, AC=1
*/

#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);


const int qtde_hoteis = 0;

printf("Qual a quantidade de hotéis na região? ");
scanf("%d", &qtde_hoteis1);

int cont = 0, cont_visit = 0, qtde_hoteis_dist = 0, visit_total = 0, numero_visitantes[qtde_hoteis];
float distancia[qtde_hoteis], acessoHotel[qtde_hoteis], media_visitantes;
char *nome_hotel[qtde_hoteis];

while (cont < qtde_hoteis)
{
    printf("Informe o nome do hotel: ");
    scanf("%s", nome_hotel[cont]);
    printf("Qual a distância do centro da cidade? ");
    scanf("%f", &distancia[cont]);
    printf("Qual a quantidade de visitantes? ");
    scanf("%d", &numero_visitantes[cont]);
    printf("Qual o tipo de acesso? 0- Não asfaltado 1- Asfaltado ");
    scanf("%f", &acessoHotel[cont]);

        if (distancia[cont] > 15) 
        {
            qtde_hoteis_dist++;
        }

        if (acessoHotel[cont] == 0)
        {   visit_total = visit_total + numero_visitantes[cont];
            cont_visit++;
        }
cont++;
}
media_visitantes = visit_total / cont_visit;

printf("A quantidade de hotéis que estão a mais de 15km do centro é de: %d\n", qtde_hoteis_dist);
printf("A média de visitantes nos hotéis sem acesso à asfalto foi de: %.2f\n", media_visitantes);
printf("O nome e a distância do centro em Km, de todos os hoteis de acesso asfaltado que tiveram menos de 1.000 visitantes: \n");

    for (int x = 0; x < qtde_hoteis_dist; x++)
    {   
        if (numero_visitantes[x] < 1000)
        {
            printf("Hotel: %s | Distância: %f\n", nome_hotel[x], distancia[x]);
        }
        
    }


}
    
