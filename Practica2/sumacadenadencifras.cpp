#include <iostream>
using namespace std;

int sumaNCifras(const char* cadena, int n) {
    int suma = 0;
    int len = 0;
    
    // Calcula la longitud de la cadena
    while (cadena[len] != '\0') {
        len++;
    }
    
    int padding = n - (len % n); // Cantidad de ceros a agregar al inicio
    if (padding == n) padding = 0; // Si no hay sobrante, no añadir ceros

    int currentNumber = 0, digitCount = 0;

    // Sumar con padding de ceros a la izquierda
    for (int i = -padding; i < len; i++) {
        char c = (i < 0) ? '0' : cadena[i]; // Usa '0' para los padding

        currentNumber = currentNumber * 10 + (c - '0');
        digitCount++;

        if (digitCount == n) {
            suma += currentNumber;
            currentNumber = 0;
            digitCount = 0;
        }
    }
    return suma;
}

int main() {
    int n;
    char cadena[100];

    cout << "Ingrese el valor de n: ";
    cin >> n;
    cout << "Ingrese una cadena numerica: ";
    cin >> cadena;

    cout << "Original: " << cadena << endl;
    cout << "Suma: " << sumaNCifras(cadena, n) << endl;

    return 0;
}

