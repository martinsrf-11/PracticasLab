#include <iostream>
using namespace std;

const int FILAS = 15;
const int ASIENTOS = 20;
char sala[FILAS][ASIENTOS];

void inicializarSala() {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < ASIENTOS; j++) {
            sala[i][j] = '-';
        }
    }
}

void mostrarSala() {
    for (int i = 0; i < FILAS; i++) {
        cout << (char)('A' + i) << " ";
        for (int j = 0; j < ASIENTOS; j++) {
            cout << sala[i][j] << " ";
        }
        cout << endl;
    }
}

void reservarAsiento(char fila, int asiento) {
    int filaIdx = fila - 'A';
    if (filaIdx >= 0 && filaIdx < FILAS && asiento >= 1 && asiento <= ASIENTOS) {
        if (sala[filaIdx][asiento - 1] == '-') {
            sala[filaIdx][asiento - 1] = '+';
            cout << "Reserva exitosa!" << endl;
        } else {
            cout << "Asiento ya reservado." << endl;
        }
    } else {
        cout << "Asiento no válido." << endl;
    }
}

void cancelarReserva(char fila, int asiento) {
    int filaIdx = fila - 'A';
    if (filaIdx >= 0 && filaIdx < FILAS && asiento >= 1 && asiento <= ASIENTOS) {
        if (sala[filaIdx][asiento - 1] == '+') {
            sala[filaIdx][asiento - 1] = '-';
            cout << "Cancelación exitosa!" << endl;
        } else {
            cout << "El asiento no está reservado." << endl;
        }
    } else {
        cout << "Asiento no válido." << endl;
    }
}

int main() {
    inicializarSala();
    char opcion, fila;
    int asiento;

    do {
        mostrarSala();
        cout << "Elija una opción (R: Reservar, C: Cancelar, S: Salir): ";
        cin >> opcion;

        if (opcion == 'R' || opcion == 'C') {
            cout << "Ingrese la fila (A-O): ";
            cin >> fila;
            cout << "Ingrese el número del asiento (1-20): ";
            cin >> asiento;

            if (opcion == 'R') {
                reservarAsiento(fila, asiento);
            } else {
                cancelarReserva(fila, asiento);
            }
        }
    } while (opcion != 'S');

    return 0;
}

