#include <iostream>
using namespace std;

// Problema 3: Comparar dos cadenas de caracteres para ver si son iguales o diferentes.
    bool compararCadenas(const char* cadena1, const char* cadena2) {
        int i = 0;
        // Comprobar longitud con caracter nulo (Final de la cadena).
        while (cadena1[i] != '\0' && cadena2[i] != '\0') {
            if (cadena1[i] != cadena2[i]) {
                return false; // Si algún carácter es diferente, no son iguales
            }
            i++;
        }
        // Si ambos llegaron al final al mismo tiempo, son iguales
        return (cadena1[i] == '\0' && cadena2[i] == '\0');
    }
    int main() {
        char cadena1[100];
        char cadena2[100];
        cout << "Ingrese la primera cadena: ";
        cin.getline(cadena1, 100);
        cout << "Ingrese la segunda cadena: ";
        cin.getline(cadena2, 100);
        if (compararCadenas(cadena1, cadena2)) {
            cout << "Las cadenas son iguales." << endl;
        } else {
            cout << "Las cadenas son diferentes." << endl;
        }
        return 0;
    }

