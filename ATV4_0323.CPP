#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <cctype>
using namespace std;

//ADS - 371
//Letícia Amaral Xavier - CB303920X

int main() {
    ifstream arquivo("nomes.txt");
    string linha;

    while (getline(arquivo, linha)) {
        stringstream ss(linha);
        vector<string> nomes;
        string palavra;

        while (ss >> palavra) {
            nomes.push_back(palavra);
        }

        string sobrenome = nomes.back();
        nomes.pop_back();

        // Sobrenome em maiúsculo
        for (char &c : sobrenome) {
            c = toupper(c);
        }

        cout << sobrenome << ", ";

        // Iniciais
        for (string n : nomes) {
            cout << (char)toupper(n[0]) << ". ";
        }

        cout << endl;
    }

    arquivo.close();
    return 0;
}