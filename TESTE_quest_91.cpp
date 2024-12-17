// Licenciado para uso doméstico e compartilhamento na internet com fins de aprendizado
// Autor: Pedro Milreu Cunha
// Data e hora da última atualização: 27/11/2012 && 22:05
// E-mail para contato: pedro_cm@hotmail.com


#include <iostream>
#include <fstream>


using namespace std;
fstream MeuArquivo("Resultado.txt", ios::app | ios::out);
float Numero_de_votos;
float Votos_em_cada_jogador[24];
int Numero_do_Jogador;
float Percentual_de_cada_jogador[24];
void Voto_do_telespectador(float);
void Total_de_votos(float);
void Numero_de_votos_de_cada_jogador(float);
void Percentual_de_votos_de_cada_jogador(float, float);
void Descobrir_jogador_preferido(int, float, float);
void Abrir();
void Fechar();

void Voto_do_telespectador(float Votos_em_cada_jogador[24])

{
 Numero_do_Jogador = 1;
    while (Numero_do_Jogador != 0)
    {
        cout << "Qual é o número do jogador em que você deseja votar?(0 para parar)" << endl;
        cin >> Numero_do_Jogador;
        if (Numero_do_Jogador < 0 || Numero_do_Jogador > 23)
        {
            cout << "Número inválido. Digite outro." << endl;
            cin >> Numero_do_Jogador;
        }
        else
        {
        Numero_de_votos++;
        Votos_em_cada_jogador[Numero_do_Jogador]++;
        }
    }
    Numero_de_votos--;
}

void Total_de_votos(float Numero_de_votos)

{
    cout << "\n\nO número total de votos foi: " << endl;
     cout << "-------------------------------------------------------------" << endl << endl;
     cout << Numero_de_votos << endl;
      cout << "-------------------------------------------------------------" << endl;
    Abrir();
    MeuArquivo << "O número total de votos foi: " << Numero_de_votos << endl;
    Fechar();
}

void Numero_de_votos_de_cada_jogador(float Votos_em_cada_jogador[24])

{
    Abrir();
   MeuArquivo << "O número de votos de cada jogador foi:(só serão mostrados os jogadores que\n"
                 " receberam pelo menos 1 voto)\n" << endl;
   cout << "\nO número de votos de cada jogador foi:(só serão mostrados os jogadores que\n"
           " receberam pelo menos 1 voto)" << endl;
   cout << "\n-------------------------------------------------------------" << endl << endl;
   for (int i = 1; i < 24; i++)
   {
       if (Votos_em_cada_jogador[i] == 0)
       {

       }
       else
       {
       cout << "Camisa nº " << i << ": " << Votos_em_cada_jogador[i] << " votos." << endl;
       MeuArquivo << "Camisa nº " << i << ": " << Votos_em_cada_jogador[i] << " votos." << endl;
       }
   }
   cout << "-------------------------------------------------------------" << endl << endl;
  Fechar();
}

void Percentual_de_votos_de_cada_jogador(float Numero_de_votos, float Votos_em_cada_jogador[24])

{
    Abrir();
    MeuArquivo << "\nO percentual de votos de cada jogador foi:(só serão mostrados os jogadores que\n"
            " receberam pelo menos 1 voto)\n" << endl;
    cout << "O percentual de votos de cada jogador foi:(só serão mostrados os jogadores que\n"
            " receberam pelo menos 1 voto)" << endl;
    cout << "\n-------------------------------------------------------------" << endl << endl;
    for (int i = 1; i < 24; i++)
    {
        Percentual_de_cada_jogador[i] = (Votos_em_cada_jogador[i]/Numero_de_votos) * 100;
        if (Percentual_de_cada_jogador[i] == 0)
        {

        }
        else
        {
        cout << "Camisa nº " << i << ": " << Percentual_de_cada_jogador[i] << "% dos votos." << endl;
        MeuArquivo << "Camisa nº " << i << ": " << Percentual_de_cada_jogador[i] << "% dos votos." << endl;
        }
    }
    cout << "-------------------------------------------------------------" << endl << endl;
    Fechar();
    }

void Descobrir_jogador_preferido(int Numero_do_Jogador, float Votos_em_cada_jogador[24], float Percentual_de_cada_jogador[24])

{
     Abrir();
     int Votos_Melhor_Jogador[24];
     float Percentual_Melhor_Jogador[24];
     int Numero_do_Melhor_Jogador[24];
     int Numero_de_melhores_jogadores = 0;


     Votos_Melhor_Jogador[1] = Votos_em_cada_jogador[1];
     Percentual_Melhor_Jogador[1] = Percentual_de_cada_jogador[1];
     Numero_do_Melhor_Jogador[1] = 1;


    for (int i = 1; i < 24; i++)
    {
        if (Votos_em_cada_jogador[i] > Votos_Melhor_Jogador[1])
        {
            Votos_Melhor_Jogador[1] = Votos_em_cada_jogador[i];
            Percentual_Melhor_Jogador[1] = Percentual_de_cada_jogador[i];
            Numero_do_Melhor_Jogador[1] = i;
        }
    }

    for (int j = 1; j < 24; j++)
    {
        if (Votos_em_cada_jogador[j] == Votos_Melhor_Jogador[1])
        {
            Votos_Melhor_Jogador[j] = Votos_em_cada_jogador[j];
            Percentual_Melhor_Jogador[j] = Percentual_de_cada_jogador[j];
            Numero_do_Melhor_Jogador[j] = j;
        }
    }

    for (int k = 1; k < 24; k++)
    {
        if (Votos_Melhor_Jogador[k] != 0 && Votos_em_cada_jogador[k] == Votos_Melhor_Jogador[k])
        {
            Numero_de_melhores_jogadores++;
        }
    }

    if (Numero_de_melhores_jogadores > 1)
    {
        cout << "Os melhores jogadores, segundo os telespectadores foram os seguintes:" << endl;
        MeuArquivo << "\nOs melhores jogadores, segundo os telespectadores foram os seguintes:\n" << endl;
    }
    else if (Numero_de_melhores_jogadores == 1)
    {
        cout << "O melhor jogador, segundo os telespectadores foi o seguinte:" << endl;
        MeuArquivo << "\nO melhor jogador, segundo os telespectadores foi o seguinte:\n" << endl;
    }
    cout << "-------------------------------------------------------------" << endl << endl;
    for (int l = 1; l < 24; l++)
    {
        if (Votos_em_cada_jogador[l] == Votos_Melhor_Jogador[l] && Votos_em_cada_jogador[l] != 0)
        {
    MeuArquivo << "Camisa nº " << Numero_do_Melhor_Jogador[l] << endl;
    MeuArquivo << "Com " << Votos_Melhor_Jogador[l] << " votos" << endl;
    MeuArquivo << "Sendo essa quantidade, " << Percentual_Melhor_Jogador[l] << "% do total de votos " << endl;
    MeuArquivo << "\n";


    cout << "Camisa nº " << Numero_do_Melhor_Jogador[l] << endl;
    cout << "Com " << Votos_Melhor_Jogador[l] << " votos" << endl;
    cout << "Sendo essa quantidade, " << Percentual_Melhor_Jogador[l] << "% do total de votos " << endl;
    cout << "\n";
        }
    }
    cout << "-------------------------------------------------------------" << endl << endl;
    MeuArquivo << "-------------------------------------------------------" << endl << endl;
    Fechar();
    cin.get();
}

void Abrir()

{
    MeuArquivo.open("Resultado.txt", ios::app | ios::out);
}

void Fechar()

{
    MeuArquivo.close();
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Voto_do_telespectador(Votos_em_cada_jogador);
    Total_de_votos(Numero_de_votos);
    Numero_de_votos_de_cada_jogador(Votos_em_cada_jogador);
    Percentual_de_votos_de_cada_jogador(Numero_de_votos, Votos_em_cada_jogador);
    Descobrir_jogador_preferido(Numero_do_Jogador, Votos_em_cada_jogador, Percentual_de_cada_jogador);

    cin.get();
    return 0;
}