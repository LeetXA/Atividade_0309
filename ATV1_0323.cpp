#include <iostream>
#include <string>
using namespace std;

//ADS - 371
//Letícia Amaral Xavier - CB303920X

int main() {
    string msg;

    cout << "Digite a mensagem: ";
    getline(cin, msg);

    int espacos = (80 - msg.length()) / 2;

    for (int i = 0; i < 4; i++) cout << endl;

    for (int i = 0; i < espacos; i++) cout << " ";
    cout << msg << endl;

    for (int linha = 6; linha <= 20; linha++) {
    for (int i = 0; i < espacos; i++) cout << " ";

    for (int j = 0; j < msg.length(); j++) {
        if (j <= linha - 6)
            cout << msg[j] << " ";
        else
            cout << "  ";
    }

    cout << endl;
}

    return 0;
}