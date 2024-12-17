/* 57) Um hotel com 30 quartos cobra R$ 50,00 por diária e mais uma taxa de serviços. A taxa
de serviços é de:
• R$ 4,00 por diária, se o número de diárias for < 15;
• R$ 3,60 por diária, se o número de diárias for = 15;
• R$ 3,00 por diária, se o número de diárias for > 15.
Faça um algoritmo que imprima o nome e o total da conta de cada cliente do hotel. Imprima
também o total ganho pelo hotel. */

#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    char nome[40];
    float valor, total_cliente, ganho_total=0;
    int dias, i;
    
    for (i=1; i<=30; i++) 
    {
        printf ("Insira o nome do cliente:\n");
        scanf("%s", &nome);
        printf ("Insira o número de diárias do hóspede:\n");
        scanf ("%d", &dias);
            
            if (dias<15)
                {valor=4.00*dias;}
            else
            if (dias==15)
                {valor=3.60*dias;}
            else
                {valor=3.00*dias;}
        
        total_cliente=(50.00*dias)+valor;
        ganho_total=total_cliente+ganho_total;

        printf ("A conta do hóspede %s é de: R$ %.2f\n", nome,total_cliente);
    }
    printf("O total ganho pelo hotel é de: R$ %.2f\n", ganho_total);
    system("pause\n");
}