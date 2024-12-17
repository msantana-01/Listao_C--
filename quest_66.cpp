/* 66) Crie um algoritmo que peça o nome, a altura e o peso de duas pessoas e apresente o
nome e peso da mais pesada e o nome e altura da mais alta.
*/

#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>
#include<windows.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    char nome1[40], nome2[40];
    int altura1, altura2, peso1, peso2;


    printf("Informe o nome da primeira pessoa:\n");
    scanf("%s", &nome1);
    printf("Informe o peso da primeira pessoa:\n");
    scanf("%d", &peso1);
    printf("Informe a altura da primeira pessoa:\n");
    scanf("%d", &altura1);

    printf("Informe o nome da segunda pessoa:\n");
    scanf("%s", &nome2);
    printf("Informe o peso da segunda pessoa:\n");
    scanf("%d", &peso2);
    printf("Informe a altura da segunda pessoa:\n");
    scanf("%d", &altura2);

    if (peso1 != peso2 ){
        if (peso1 > peso2)
        {
            printf("O nome da pessoa mais pesada é: %s\n", nome1);
            printf("Com o peso de: %d\n", peso1);
        }
        else
        {
            printf("O nome da pessoa mais pesada é: %s\n", nome2);
            printf("Com o peso de: %d\n", peso2);
        }
    }

    if (altura1 != altura2){
       if (altura1 > altura2)
        {
            printf("O nome da pessoa mais alta é: %s\n", nome1);
            printf("Com a altura de: %d\n", altura1);
        }
        else
        {
            printf("O nome da pessoa mais alta é: %s\n", nome2);
            printf("Com a altura de: %d\n", altura2);
        }
    }        
    

    if (peso1 == peso2){
        printf("%s e %s têm o mesmo peso de: %d\n", nome1, nome2, peso1);
    }
    if (altura1 == altura2){
        printf("%s e %s têm a mesma altura de: %d\n", nome1, nome2, altura1); 
    }

}

   