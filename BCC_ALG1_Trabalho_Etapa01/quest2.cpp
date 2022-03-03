#include <iostream>

using namespace std;

//QUEST�O 2 da Avalia��o do dia 01/04/2021
//Camila Flor�o Barcellos

int main ()
{
    setlocale (LC_ALL, "portuguese");

    float km1, km2, duracaokm;
    int ano1, mes1, ano2, mes2, duracaomes, auxano, auxmes;

    cout << "COLOCA��O" << endl;
    cout << "Informe o ano da coloca��o do �leo: ";
    cin >> ano1;

    do
    {
        cout << "O m�s de " << ano1 << " da coloca��o do �leo (1 a 12): ";
        cin >> mes1;

        if(mes1<1 || mes1>12)
            cout << "M�s inv�lido, tente novamente com um n�mero inteiro entre 1 e 12" << endl;

    }while(mes1<1 || mes1>12);

    cout << "A quilometragem do caminh�o na coloca��o: ";
    cin >> km1;
    cout << endl;

    cout << "RETIRADA" << endl;
    do
    {
        cout << "Informe o ano da retirada do �leo: ";
        cin >> ano2;

        if(ano2<ano1)
            cout << "Ano inv�lido, tente novamente" << endl;

    }while(ano2<ano1);

    do
    {
        cout << "O m�s de " << ano2 << " da coloca��o do �leo (1 a 12): ";
        cin >> mes2;

        if(mes2<1 || mes2>12)
            cout << "M�s inv�lido, tente novamente com um n�mero inteiro entre 1 e 12" << endl;

    }while(mes2<1 || mes2>12);

    cout << "A quilometragem do caminh�o na retirada: ";
    cin >> km2;
    cout << endl;

    auxano = (ano2-ano1)*12;
    auxmes = mes2-mes1;
    duracaomes = auxano+auxmes;

    duracaokm = km2-km1;

    cout << "Dura��o total do �leo do caminh�o: " << endl;
    cout << "- " << duracaomes << " meses" << endl;
    cout << "- " << duracaokm << "Km" << endl;

}
