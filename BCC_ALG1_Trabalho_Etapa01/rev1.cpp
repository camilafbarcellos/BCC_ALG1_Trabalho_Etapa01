#include <iostream>
#include <ctime>

using namespace std;

int main ()
{
    setlocale (LC_ALL, "portuguese");

    float peso, frete;
    char estado;

    cout << "Informe o peso do produto em quilogramas (máx. 4Kg): ";
    cin >> peso;

    cout<< "Informe o estado de destino (R-RS, S-SC ou P-PR): ";
    cin >> estado;
    estado = toupper(estado);
    cout << endl;

    switch(estado) {
    case 'R':
        if(peso<2)
            cout << "Valor para RS: R$8,10" << endl;
        else if(peso>=2 && peso<3)
            cout << "Valor para RS: R$8,70" << endl;
        else if(peso>=3 && peso<4)
            cout << "Valor para RS: R$9,20" << endl;
        break;

    case 'S':
        if(peso<2)
            cout << "Valor para RS: R$9,40" << endl;
        else if(peso>=2 && peso<3)
            cout << "Valor para RS: R$10,30" << endl;
        else if(peso>=3 && peso<4)
            cout << "Valor para RS: R$11,20" << endl;
        break;

    case 'P':
        if(peso<2)
            cout << "Valor para RS: R$11,10" << endl;
        else if(peso>=2 && peso<3)
            cout << "Valor para RS: R$12,20" << endl;
        else if(peso>=3 && peso<4)
            cout << "Valor para RS: R$13,40" << endl;
        break;
    }

    if(estado!='R' && estado!='S' && estado!='P')
        cout << "Estado inválido, tente novamente informando R, S ou P" << endl;

}
