#include <iostream>
#include <ctime>

using namespace std;

int main ()
{
    setlocale (LC_ALL, "portuguese");

    float salario, menorsal=0, maiorsal=0, auxsal=0;
    int idade, numpessoas=0, quantmasc=0, lermais, auxidade=0;
    char sexo;

    do
    {
        cout << "Informe o seu salário: R$";
        cin >> salario;
        auxsal = auxsal+salario;
        if(salario>maiorsal)
            maiorsal = salario;
            menorsal = maiorsal;
        if(salario<menorsal)
            menorsal = salario;

        cout << "Informe a sua idade: ";
        cin >> idade;
        auxidade = auxidade+idade;

        cout << "Informe o seu sexo (F-feminino ou M-masculino): ";
        cin >> sexo;
        sexo = toupper(sexo);
        if(sexo=='M')
            quantmasc++;

        numpessoas++;

        cout << endl;
        cout << "Deseja adicionar mais uma pessoa? (1-SIM ou 0-NÃO)" << endl;
        cin >> lermais;
        system("cls");

    }while(lermais==1);

    system("cls");
    cout << "Número de pessoas participantes da pesquisa: " << numpessoas << endl;
    cout << "Média de salário dos participantes: " << auxsal/numpessoas << endl;
    cout << "Menor salário: " << menorsal << endl;
    cout << "Maior salário: " << maiorsal << endl;
    cout << "Quantidade de pessoas do sexo masculino: " << quantmasc << endl;
    cout << "Média de idade dos participantes: " << auxidade/numpessoas << endl;

}
