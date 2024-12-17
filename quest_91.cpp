/* Uma grande emissora de televisão quer fazer uma enquete entre os seus
telespectadores para saber qual o melhor jogador após cada jogo. Para isto, faz-se
necessário o desenvolvimento de um programa, que será utilizado pelas telefonistas,
para a computação dos votos. Sua equipe foi contratada para desenvolver este
programa, utilizando a linguagem de programação C++. Para computar cada voto, a
telefonista digitará um número, entre 1 e 23,correspondente ao número da camisa do
jogador. Um número de jogador igual zero,indica que a votação foi encerrada. Se um
número inválido for digitado, o programa deve ignorá-lo, mostrando uma breve
mensagem de aviso, e voltando a pedir outro número. Após o final da votação, o
programa deverá exibir:

a. O total de votos computados;
b. Os números e respectivos votos de todos os jogadores que receberam votos;
c. O percentual de votos de cada um destes jogadores;
d. O número do jogador escolhido como o melhor jogador da partida, juntamente com o
número de votos e o percentual de votos dados a ele.*/

#include <iostream>
#include <fstream>
#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

using namespace std;
fstream arquivo_texto("resultados_pesquisa.txt", ios::app | ios::out);
float qtde_votos;
float votos_jogador[24];
int numero_camisa = 1;
float percentual_jogador[24];
void abrir_arquivo();
void fechar_arquivo();

void voto_telespectador(float votos_jogador[24])
{
   
    while (numero_camisa != 0)
    {
        printf("Informe o número do jogador votado. (Digite 0 para encerrar a pesquisa)\n");
        scanf("%d", &numero_camisa);
        if (numero_camisa < 0 || numero_camisa > 23)
        {
            printf("O número da camisa do jogador é inválido. Digite outro.\n");
            scanf("%d", &numero_camisa);;
        }
        else
        {
        qtde_votos++;
        votos_jogador[numero_camisa]++;
        }
    }
    qtde_votos--;
}

void votos_totais(float qtde_votos)

{
    abrir_arquivo();
    arquivo_texto << "RESULTADO DA PESQUISA" << endl;
    arquivo_texto << "-------------------------------------------------------------\n\n" << endl;
    arquivo_texto << "\nForam computados: " << qtde_votos << "votos." << endl;
    fechar_arquivo();
    printf ("-------------------------------------------------------------\n\n");
    printf("RESULTADO DA PESQUISA\n"); 
    printf("\nForam computados: %.0f votos.\n", qtde_votos); 
}

void votos_cada_jogador(float votos_jogador[24])

{
    abrir_arquivo();
    arquivo_texto << "O número de votos de cada jogador foi:\n(só serão mostrados os jogadores que receberam um voto ou mais)\n" << endl;
    printf("O número de votos de cada jogador foi:\n(só serão mostrados os jogadores que receberam um voto ou mais).\n");
   
    for (int i = 1; i < 24; i++)
    {
       if (votos_jogador[i] == 0)
       {

       }
       else
       {
       printf("Jogador nº %d: %.0f votos.\n", i, votos_jogador[i]);
       arquivo_texto << "Jogador nº " << i << ": " << votos_jogador[i] << " votos." << endl;
       }
   }
  printf("\n");
  fechar_arquivo();
}

void perc_votos_ind(float qtde_votos, float votos_jogador[24])

{
    abrir_arquivo();
    arquivo_texto << "\nO percentual de votos de cada jogador foi:\n(só serão mostrados os jogadores que receberam um voto ou mais)\n" << endl;
    printf("O percentual de votos de cada jogador foi:\n(só serão mostrados os jogadores que receberam um voto ou mais).\n");
    printf("\n");
    for (int i = 1; i < 24; i++)
    {
        percentual_jogador[i] = (votos_jogador[i]/qtde_votos) * 100;
        if (percentual_jogador[i] == 0)
        {

        }
        else
        {
        printf("Jogador nº %d: %.2f%% dos votos.\n", i, percentual_jogador[i]);
        arquivo_texto << "Camisa nº " << i << ": " << percentual_jogador[i] << "% dos votos." << endl;
        }
    }
    printf ("-------------------------------------------------------------\n\n");
    fechar_arquivo();
    }


void fc_jogador_preferido(int numero_camisa, float votos_jogador[24], float percentual_jogador[24])
{
     abrir_arquivo();
     int votos_melhor[24];
     float percent_melhor[24];
     int numero_melhor[24];
     int numero_melhores = 0;


     votos_melhor[1] = votos_jogador[1];
     percent_melhor[1] = percentual_jogador[1];
     numero_melhor[1] = 1;


    for (int i = 1; i < 24; i++)
    {
        if (votos_jogador[i] > votos_melhor[1])
        {
            votos_melhor[1] = votos_jogador[i];
            percent_melhor[1] = percentual_jogador[i];
            numero_melhor[1] = i;
        }
    }

    for (int j = 1; j < 24; j++)
    {
        if (votos_jogador[j] == votos_melhor[1])
        {
            votos_melhor[j] = votos_jogador[j];
            percent_melhor[j] = percentual_jogador[j];
            numero_melhor[j] = j;
        }
    }

    for (int k = 1; k < 24; k++)
    {
        if (votos_melhor[k] != 0 && votos_jogador[k] == votos_melhor[k])
        {
            numero_melhores++;
        }
    }

    if (numero_melhores > 1)
    {
        printf("Os melhores jogadores segundo a pesquisa foram:\n"); 
        arquivo_texto << "\nOs melhores jogadores segundo a pesquisa foram:\n" << endl;
    }
    else if (numero_melhores == 1)
    {
        printf("O melhor jogador segundo a pesquisa é:\n"); 
        arquivo_texto << "\nO melhor jogador segundo a pesquisa é:\n" << endl;
    }
    
    for (int l = 1; l < 24; l++)
    {
        if (votos_jogador[l] == votos_melhor[l] && votos_jogador[l] != 0)
        {
    arquivo_texto << "Jogador nº " << numero_melhor[l] << endl;
    arquivo_texto << "Com " << votos_melhor[l] << " votos" << endl;
    arquivo_texto << "Recebendo " << percent_melhor[l] << "% do total de votos " << endl;
    arquivo_texto << "\n";

    printf("Jogador nº %d. \n", numero_melhor[l] );
    printf("Com %d votos.\n", votos_melhor[l] );
    printf("Recebendo %.2f%% do total de votos.\n", percent_melhor[l]);

    
        }
    }
    printf ("-------------------------------------------------------------\n\n");
    arquivo_texto << "-------------------------------------------------------" << endl << endl;
    fechar_arquivo();
    
}

void abrir_arquivo()

{
    arquivo_texto.open("resultados_pesquisa.txt", ios::app | ios::out);
}

void fechar_arquivo()

{
    arquivo_texto.close();
}

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");
    SetConsoleOutputCP(CP_UTF8);

    voto_telespectador(votos_jogador);
    votos_totais(qtde_votos);
    votos_cada_jogador(votos_jogador);
    perc_votos_ind(qtde_votos, votos_jogador);
    fc_jogador_preferido(numero_camisa, votos_jogador, percentual_jogador);

    
}
