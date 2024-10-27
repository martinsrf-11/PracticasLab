#include <iostream>
using namespace std;

void enteroACadena(int numero, char* &cadena) {
    int temp = numero, longitud = 0;

    // Calcular la longitud del número
    do {
        longitud++;
        temp /= 10;
    } while (temp != 0);

    cadena = new char[longitud + 1]; // +1 para el carácter nulo
    cadena[longitud] = '\0'; // Terminar la cadena

    // Convertir entero a cadena
    for (int i = longitud - 1; i >= 0; --i) {
        cadena[i] = '0' + (numero % 10);
        numero /= 10;
    }
}

int main() {
    int numero;
    if (numero >= 0){
        cout << "Ingrese un numero entero positivo: ";
        cin >> numero;
    
        char* cadena = nullptr;
        enteroACadena(numero, cadena);
    
        cout << "Cadena resultante: " << cadena << endl;
    
        delete[] cadena; // Liberar memoria
    } else {
        cout << "Verifique que el numero ingresado sea igual o mayor a cero.";
    }
    return 0;
}


