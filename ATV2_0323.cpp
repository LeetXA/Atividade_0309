#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//ADS - 371
//Letícia Amaral Xavier - CB303920X

int main() {
    string msg, limpa = "", invertida;

    cout << "Digite a mensagem: ";
    getline(cin, msg);

    for (char c : msg) {
        if (c != ' ')
            limpa += toupper(c);
    }

    invertida = limpa;
    reverse(invertida.begin(), invertida.end());

    if (limpa == invertida)
        cout << "É um palíndromo!" << endl;
    else
        cout << "Não é um palíndromo!" << endl;

    return 0;
}