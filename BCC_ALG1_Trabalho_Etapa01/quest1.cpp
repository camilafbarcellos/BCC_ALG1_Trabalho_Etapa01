#include <iostream>

using namespace std;

//QUESTÃO 1 da Avaliação do dia 01/04/2021
//Camila Florão Barcellos

int main ()
{
    setlocale (LC_ALL, "portuguese");

    cout << fixed << cout.precision(2);

    float salbruto, natal, salliquido, pensao;

    cout << "Informe o valor do salário bruto: R$ ";
    cin >> salbruto;

    cout << "Informe o valor da bonificação natalina: R$ ";
    cin >> natal;

    pensao = salbruto*0.072;
    salliquido = (salbruto+natal)-pensao;

    cout << endl;
    cout << "Valor descontado da pensão alimentícia (7,2%): R$ " << pensao << endl;
    cout << "Valor total do salário líquido: R$ " << salliquido << endl;


}
