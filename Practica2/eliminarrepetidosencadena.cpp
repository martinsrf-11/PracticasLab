#include <iostream>
using namespace std;

void eliminarRepetidos(char* cadena) {
    int index = 0;
    for (int i = 0; cadena[i] != '\0'; i++) {
        bool repetido = false;
        for (int j = 0; j < i; j++) {
            if (cadena[i] == cadena[j]) {
                repetido = true;
                break;
            }
        }
        if (!repetido) {
            cadena[index++] = cadena[i];
        }
    }
    cadena[index] = '\0'; // Terminar la nueva cadena
}

int main() {
    char cadena[100];
    cout << "Ingrese una cadena: ";
    cin.getline(cadena, 100); // Usamos getline para leer la cadena completa con espacios

    cout << "Original: " << cadena << endl;
    eliminarRepetidos(cadena);
    cout << "Sin repetidos: " << cadena << endl;

    return 0;
}

