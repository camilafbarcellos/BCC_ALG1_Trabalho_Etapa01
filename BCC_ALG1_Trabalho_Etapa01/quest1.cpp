#include <iostream>

using namespace std;

//QUEST�O 1 da Avalia��o do dia 01/04/2021
//Camila Flor�o Barcellos

int main ()
{
    setlocale (LC_ALL, "portuguese");

    cout << fixed << cout.precision(2);

    float salbruto, natal, salliquido, pensao;

    cout << "Informe o valor do sal�rio bruto: R$ ";
    cin >> salbruto;

    cout << "Informe o valor da bonifica��o natalina: R$ ";
    cin >> natal;

    pensao = salbruto*0.072;
    salliquido = (salbruto+natal)-pensao;

    cout << endl;
    cout << "Valor descontado da pens�o aliment�cia (7,2%): R$ " << pensao << endl;
    cout << "Valor total do sal�rio l�quido: R$ " << salliquido << endl;


}
