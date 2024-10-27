#include <iostream>
using namespace std;

const int FILAS = 6;
const int COLUMNAS = 8;

int contarEstrellas(int matriz[FILAS][COLUMNAS]) {
    int estrellas = 0;

    // Recorremos la matriz, evitando los bordes
    for (int i = 1; i < FILAS - 1; i++) {
        for (int j = 1; j < COLUMNAS - 1; j++) {
            // Calculamos la suma de ai,j y sus vecinos
            int sumaVecinos = matriz[i][j] + matriz[i][j - 1] + matriz[i][j + 1] +
                              matriz[i - 1][j] + matriz[i + 1][j];

            // Aplicamos la fórmula y verificamos si cumple la condición
            if (sumaVecinos / 5 > 6) {
                estrellas++;
            }
        }
    }

    return estrellas;
}

int main() {
    int matriz[FILAS][COLUMNAS] = {
        {0, 3, 4, 0, 0, 0, 6, 8},
        {5, 13, 6, 0, 0, 0, 2, 3},
        {2, 6, 2, 7, 3, 0, 10, 0},
        {0, 0, 4, 15, 4, 1, 6, 0},
        {0, 0, 7, 12, 6, 9, 10, 4},
        {5, 0, 6, 10, 6, 4, 8, 0}
    };

    int numeroEstrellas = contarEstrellas(matriz);
    cout << "Número de estrellas encontradas: " << numeroEstrellas << endl;

    return 0;
}


