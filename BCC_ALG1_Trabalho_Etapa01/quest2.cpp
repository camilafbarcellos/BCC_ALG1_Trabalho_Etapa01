#include <iostream>

using namespace std;

//QUESTÃO 2 da Avaliação do dia 01/04/2021
//Camila Florão Barcellos

int main ()
{
    setlocale (LC_ALL, "portuguese");

    float km1, km2, duracaokm;
    int ano1, mes1, ano2, mes2, duracaomes, auxano, auxmes;

    cout << "COLOCAÇÃO" << endl;
    cout << "Informe o ano da colocação do óleo: ";
    cin >> ano1;

    do
    {
        cout << "O mês de " << ano1 << " da colocação do óleo (1 a 12): ";
        cin >> mes1;

        if(mes1<1 || mes1>12)
            cout << "Mês inválido, tente novamente com um número inteiro entre 1 e 12" << endl;

    }while(mes1<1 || mes1>12);

    cout << "A quilometragem do caminhão na colocação: ";
    cin >> km1;
    cout << endl;

    cout << "RETIRADA" << endl;
    do
    {
        cout << "Informe o ano da retirada do óleo: ";
        cin >> ano2;

        if(ano2<ano1)
            cout << "Ano inválido, tente novamente" << endl;

    }while(ano2<ano1);

    do
    {
        cout << "O mês de " << ano2 << " da colocação do óleo (1 a 12): ";
        cin >> mes2;

        if(mes2<1 || mes2>12)
            cout << "Mês inválido, tente novamente com um número inteiro entre 1 e 12" << endl;

    }while(mes2<1 || mes2>12);

    cout << "A quilometragem do caminhão na retirada: ";
    cin >> km2;
    cout << endl;

    auxano = (ano2-ano1)*12;
    auxmes = mes2-mes1;
    duracaomes = auxano+auxmes;

    duracaokm = km2-km1;

    cout << "Duração total do óleo do caminhão: " << endl;
    cout << "- " << duracaomes << " meses" << endl;
    cout << "- " << duracaokm << "Km" << endl;

}
