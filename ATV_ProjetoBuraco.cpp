#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

//ADS - 371
//Letícia Amaral Xavier - CB303920X

int main() {
    string baralho[2][52];
    string mao[4][11];

    int index = 0;

    for (int b = 0; b < 2; b++) {          
        index = 0;
        for (int n = 1; n <= 4; n++) {     // naipes
            for (int c = 1; c <= 13; c++) { // cartas
                string carta = "";

                carta += to_string(n);

                if (c < 10)
                    carta += "0" + to_string(c);
                else
                    carta += to_string(c);

                carta += to_string(b + 1);

                baralho[b][index] = carta;
                index++;
            }
        }
    }

    string monte[104];
    index = 0;

    for (int b = 0; b < 2; b++) {
        for (int c = 0; c < 52; c++) {
            monte[index++] = baralho[b][c];
        }
    }

    srand(time(0));

    for (int i = 0; i < 104; i++) {
        int r = rand() % 104;
        string temp = monte[i];
        monte[i] = monte[r];
        monte[r] = temp;
    }

    index = 0;
    for (int j = 0; j < 4; j++) {
        for (int c = 0; c < 11; c++) {
            mao[j][c] = monte[index++];
        }
    }

    for (int j = 0; j < 4; j++) {
        cout << "Jogador " << j + 1 << ": ";
        for (int c = 0; c < 11; c++) {
            cout << mao[j][c] << " ";
        }
        cout << endl;
    }

    return 0;
}