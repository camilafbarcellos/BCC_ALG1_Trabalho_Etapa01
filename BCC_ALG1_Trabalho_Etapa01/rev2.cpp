#include <iostream>
#include <ctime>

using namespace std;

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int gremio, inter, quant=0, vitinter=0, vitgremio=0, empate=0, vencedor, auxinter=0, auxgremio=0;
    char novo;
    float media;

    do
    {
        cout << "Informe o número de gols marcados pelo Inter: ";
        cin >> inter;
        auxinter = auxinter+inter;
        cout << "Informe o número de gols marcados pelo Grêmio: ";
        cin >> gremio;
        auxgremio = auxinter+gremio;
        cout << endl;
        if(inter>gremio)
            vitinter++;
        else if(gremio>inter)
            vitgremio++;
        else if(inter==gremio)
            empate++;
        cout << "Novo grenal? (S-sim ou N-não)" << endl;
        cin >> novo;
        novo = toupper(novo);
        quant++;
        cout << endl;

    }while(novo=='S');

    cout << "Total de GRENAIS analisados: " << quant << endl;
    cout << "Vitórias do Inter: " << vitinter << endl;
    cout << "Vitórias do Grêmio: " << vitgremio << endl;
    cout << "Empates: " << empate << endl;
    cout << "Média de gols por partida: " << (auxinter+auxgremio)/quant << endl;

    if(vitinter>vitgremio)
        cout << "Time que venceu mais jogos: Inter" << endl;
    else if(vitgremio>vitinter)
        cout << "Time que venceu mais jogos: Grêmio" << endl;
    else
        cout << "Não houve vencedor" << endl;

}
