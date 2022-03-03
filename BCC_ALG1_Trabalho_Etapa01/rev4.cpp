#include <iostream>
#include <ctime>

using namespace std;

int main ()
{
    setlocale (LC_ALL, "portuguese");

    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, faixa=0, soma=0, div=0, impar=0, quant=0;
    float media;

    cout << "Digite o primeiro número: ";
    cin >> n1;
    if(n1>=1 && n1<=30)
    {
        faixa++;
        soma = soma+n1;
    }
    if(n1%2==0 && n1%3==0)
        quant++;
    if(n1%2!=0)
        impar++;

    cout << "Digite o segundo número: ";
    cin >> n2;
    if(n2>=1 && n2<=30)
    {
        faixa++;
        soma = soma+n2;
    }
    if(n2%2==0 && n2%3==0)
        quant++;
    if(n2%2!=0)
        impar++;

    cout << "Digite o terceiro número: ";
    cin >> n3;
    if(n3>=1 && n3<=30)
    {
        faixa++;
        soma = soma+n3;
    }
    if(n3%2==0 && n3%3==0)
        quant++;
    if(n3%2!=0)
        impar++;

    cout << "Digite o quarto número: ";
    cin >> n4;
    if(n4>=1 && n4<=30)
    {
        faixa++;
        soma = soma+n4;
    }
    if(n4%2==0 && n4%3==0)
        quant++;
    if(n4%2!=0)
        impar++;

    cout << "Digite o quinto número: ";
    cin >> n5;
    if(n5>=1 && n5<=30)
    {
        faixa++;
        soma = soma+n5;
    }
    if(n5%2==0 && n5%3==0)
        quant++;
    if(n5%2!=0)
        impar++;

    cout << "Digite o sexto número: ";
    cin >> n6;
    if(n6>=1 && n6<=30)
    {
        faixa++;
        soma = soma+n6;
    }
    if(n6%2==0 && n6%3==0)
        quant++;
    if(n6%2!=0)
        impar++;

    cout << "Digite o sétimo número: ";
    cin >> n7;
    if(n7>=1 && n7<=30)
    {
        faixa++;
        soma = soma+n7;
    }
    if(n7%2==0 && n7%3==0)
        quant++;
    if(n7%2!=0)
        impar++;

    cout << "Digite o oitavo número: ";
    cin >> n8;
    if(n8>=1 && n8<=30)
    {
        faixa++;
        soma = soma+n8;
    }
    if(n8%2==0 && n8%3==0)
        quant++;
    if(n8%2!=0)
        impar++;

    cout << "Digite o nono número: ";
    cin >> n9;
    if(n9>=1 && n9<=30)
    {
        faixa++;
        soma = soma+n9;
    }
    if(n9%2==0 && n9%3==0)
        quant++;
    if(n9%2!=0)
        impar++;

    cout << "Digite o décimo número: ";
    cin >> n10;
    if(n10>=1 && n10<=30)
    {
        faixa++;
        soma = soma+n10;
    }
    if(n10%2==0 && n10%3==0)
        quant++;
    if(n10%2!=0)
        impar++;

    cout << endl;
    cout << "Quantidade de números na faixa de 1 a 30: " << faixa << endl;
    cout << "Soma dos números na faixa de 1 a 30: " << soma << endl;
    cout << "Quantidade de números divisíveis por 2 e por 3: " << quant << endl;
    cout << "Média dos números: " << (n1+n2+n3+n4+n5+n6+n7+n8+n9+n10)/10 << endl;
    cout << "Percentual de números ímpares em relação aos números lidos: " << (impar*100)/10 << "%" << endl;
}
