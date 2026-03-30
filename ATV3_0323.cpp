#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
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

        cout << sobrenome << ", ";

        for (string n : nomes) {
            cout << n << " ";
        }

        cout << endl;
    }

    arquivo.close();
    return 0;
}