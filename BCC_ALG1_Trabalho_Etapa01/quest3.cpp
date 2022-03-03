#include <iostream>

using namespace std;

//QUESTÃO 3 da Avaliação do dia 01/04/2021
//Camila Florão Barcellos

int main ()
{
    setlocale (LC_ALL, "portuguese");

    cout << fixed << cout.precision(2);

    int novo;
    float pontosA=0, pontosB=0, pontosIA=0, pontosIB=0, pontosYA=0, pontosYB=0;
    char atleta, tipoponto;

    do
    {
        do
        {
            cout << "Selecione o atleta (A-azul ou B-branco): ";
            cin >> atleta;
            atleta = toupper(atleta);

            if(atleta!='A' && atleta!='B')
                cout << "Atleta inválido, tente novamente" << endl;

        }while(atleta!='A' && atleta!='B');

        if(atleta=='A')
        {
            cout << "Insira o tipo de ponto (I, W ou Y) marcado pelo atleta Azul: ";
            cin >> tipoponto;
            tipoponto = toupper(tipoponto);

            switch(tipoponto)
            {
            case 'I':
                cout << "Ipon = 20 pontos" << endl;
                pontosA = pontosA+20;
                pontosIA++;
                break;

            case 'W':
                cout << "Wazari = 10 pontos" << endl;
                pontosA = pontosA+10;
                break;

            case 'Y':
                cout << "Yuko = 3,5 pontos" << endl;
                pontosA = pontosA+3.5;
                pontosYA++;
                break;
            }
        }

        if(atleta=='B')
        {
            cout << "Insira o tipo de ponto (I, W ou Y) marcado pelo atleta Branco: ";
            cin >> tipoponto;
            tipoponto = toupper(tipoponto);

            switch(tipoponto)
            {
            case 'I':
                cout << "Ipon = 20 pontos" << endl;
                pontosB = pontosB+20;
                pontosIB++;
                break;

            case 'W':
                cout << "Wazari = 10 pontos" << endl;
                pontosB = pontosB+10;
                break;

            case 'Y':
                cout << "Yuko = 3,5 pontos" << endl;
                pontosB = pontosB+3.5;
                pontosYB++;
                break;
            }
        }

        cout << endl;
        cout << "Nova partida? (1-SIM ou 0-NÃO) ";
        cin >> novo;

        system("cls");

    }while(novo==1);

    system("cls");

    cout << "Total de pontos do lutador Azul: " << pontosA << " pontos" << endl;
    cout << "Total de pontos do lutador Branco: " << pontosB << " pontos" << endl;

    if(pontosA>pontosB)
    {
        cout << "Lutador vencedor: Azul" << endl;
        cout << "Total de pontos do vencedor: " << pontosA << endl;
        cout << "Percentual em relação ao total: " << (pontosA*100)/(pontosA+pontosB) << "%" << endl;
        cout << "Quantidade de pontos Ipon do vencedor: " << pontosIA << ", contabilizando " << pontosIA*20 << " pontos totais" << endl;
    }

    else if(pontosB>pontosA)
    {
        cout << "Lutador vencedor: Branco" << endl;
        cout << "Total de pontos do vencedor: " << pontosB << endl;
        cout << "Percentual em relação ao total: " << (pontosB*100)/(pontosA+pontosB) << "%" << endl;
        cout << "Quantidade de pontos Ipon do vencedor: " << pontosIB<< ", contabilizando " << pontosIB*20 << " pontos totais" << endl;
    }

    else
        cout << "Partida finalizada com empate, não houve vencedor!" << endl;


    if(pontosYA>pontosYB)
        cout << "Lutador com maior pontuação de Yuko: Azul, com " << pontosYA<< " pontos, contabilizando " << pontosYA*3.5 << " no total" << endl;

    else if(pontosYB>pontosYA)
        cout << "Lutador com maior pontuação de Yuko: Branco, com " << pontosYB<< " pontos, contabilizando " << pontosYB*3.5 << " no total" << endl;

    else
        cout << "Lutadores Azul e Branco obtiveram a mesma quantidade de pontos Yuko" << endl;

}
