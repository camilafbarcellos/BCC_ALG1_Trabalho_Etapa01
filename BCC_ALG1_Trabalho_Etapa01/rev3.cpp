#include <iostream>
#include <ctime>

using namespace std;

int main ()
{
    setlocale (LC_ALL, "portuguese");

    srand(time(NULL));

    int dado1, dado2, soma, palpite;

    do
    {
        cout << "Palpite a soma de dois lançamentos aleatórios de dados: ";
        cin >> palpite;
        cout << endl;

        if(palpite<2 || palpite>12)
            cout << "Informe um valor válido entre 2 e 12 e tente novamente" << endl;
            cout << endl;

    }
    while(palpite<2 || palpite>12);


    dado1 = (rand()%7 +1);
    dado2 = (rand()%7 +1);
    soma = dado1+dado2;

    cout << "Valor do primeiro dado: " << dado1 << endl;
    cout << "Valor do segundo dado: " << dado2 << endl;
    cout << "Soma dos lançamentos: " << soma << endl;
    cout << "Palpite do usuário: " << palpite << endl;

    if(palpite==soma)
        cout << "Parabéns! Você acertou com seu palpite" << endl;
    else
        cout << "Infelizmente, seu palpite não foi correto" << endl;

}
