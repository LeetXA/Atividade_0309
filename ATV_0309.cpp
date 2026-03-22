#include <iostream>
#include <iomanip>
using namespace std;

//ADS - 371
//Letícia Amaral Xavier - CB303920X

const int FILEIRAS = 15;
const int POLTRONAS = 40;

int main() {
    int opcao;
    int teatro[FILEIRAS][POLTRONAS] = {0}; // 0 = livre | 1 = ocupado

    do {
        cout << "\n===== TEATRO =====\n";
        cout << "0 - Finalizar\n";
        cout << "1 - Reservar poltrona\n";
        cout << "2 - Mapa de ocupacao\n";
        cout << "3 - Faturamento\n";
        cout << "Opcao: ";
        cin >> opcao;

        switch(opcao) {

        case 1: {
            int f, p;

            cout << "Informe a fileira (1 a 15): ";
            cin >> f;
            cout << "Informe a poltrona (1 a 40): ";
            cin >> p;

            // Validação
            if (f < 1 || f > 15 || p < 1 || p > 40) {
                cout << "Posicao invalida!\n";
            } else {
                if (teatro[f-1][p-1] == 0) {
                    teatro[f-1][p-1] = 1;
                    cout << "Reserva realizada com sucesso!\n";
                } else {
                    cout << "Lugar ja ocupado!\n";
                }
            }
            break;
        }

        case 2:
            cout << "\nMapa de ocupacao:\n";
            for (int i = 0; i < FILEIRAS; i++) {
                for (int j = 0; j < POLTRONAS; j++) {
                    if (teatro[i][j] == 0)
                        cout << ". ";
                    else
                        cout << "# ";
                }
                cout << endl;
            }
            cout << "\nLegenda: . = livre | # = ocupado\n";
            break;

        case 3: {
            int ocupados = 0;
            double faturamento = 0;

            for (int i = 0; i < FILEIRAS; i++) {
                for (int j = 0; j < POLTRONAS; j++) {
                    if (teatro[i][j] == 1) {
                        ocupados++;

                        // cálculo do valor por fileira
                        if (i < 5)
                            faturamento += 50;
                        else if (i < 10)
                            faturamento += 30;
                        else
                            faturamento += 15;
                    }
                }
            }

            cout << "\nQtde de lugares ocupados: " << ocupados << endl;
            cout << "Valor da bilheteria: R$ " 
                 << fixed << setprecision(2) << faturamento << endl;
            break;
        }

        case 0:
            cout << "Encerrando...\n";
            break;

        default:
            cout << "Opcao invalida!\n";
        }

    } while(opcao != 0);

    return 0;
}