/*78) Faça um algoritmo que leia o número de andares de um prédio e, a seguir, para cada
andar do prédio, leia o número de pessoas que entraram e saíram do elevador.
Considere que o elevador está vazio e está subindo, os dados se referem a apenas uma
“subida” do elevador e que o número de pessoas dentro do elevador sempre será maior
ou igual a 0.
Se o número de pessoas, após a entrada e saída for maior que 15, deve ser mostrada a
mensagem “EXCESSO DE PASSAGEIROS . DEVEM SAIR" em seguida, o número de pessoas
que devem sair do elevador, de modo que seja obedecido o limite de 15 passageiros.
Após a entrada de pessoas no último andar o algoritmo deve mostrar quantas pessoas
irão descer. */

#include<stdio.h> 
#include<stdlib.h>
#include<locale.h>
#include<iostream>
#include<windows.h>


int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    const int LIMITE = 15;
    int qtdAndares, qtdEntra, qtdSai, devemSair, qtdPessoas = 0, andar = 0;

    printf("Digite a quantidade de andares no prédio:\n");
    scanf("%d", &qtdAndares);

    while(andar < qtdAndares)
    {
        if(andar == 0){
            printf("Térreo.\n");
        }
        else
        {
            printf("Andar número: %d\n", andar);
        }

        printf ("Informe a quantidade de pessoas que entrarão: ");
        scanf ("%d", &qtdEntra);

        qtdPessoas += qtdEntra;

        if(andar > 0 && qtdPessoas > 0)
        {
            printf ("Informe a quantidade de pessoas que sairão: ");
            scanf ("%d", &qtdSai);

            if(qtdSai > qtdPessoas){
                qtdPessoas = 0;
            }else{
                qtdPessoas -= qtdSai;
            }
        }

        if(qtdPessoas > LIMITE){
            devemSair = qtdPessoas - LIMITE;
            qtdPessoas -= devemSair;
            printf ("PASSAGEIROS EN EXCESSO! DEVEM SAIR: %d pessoas.\n", devemSair);
        }

        andar++;
    }

    printf("Andar: %d\n", andar);
    printf("Total de Pessoas que irão descer: %d", qtdPessoas);

}
  
   