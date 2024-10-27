#include <iostream>
using namespace std;

// Función para encontrar el área de intersección de dos rectángulos
void interseccionRectangulos(int A[4], int B[4], int C[4]) {
    // Calculamos las coordenadas de la intersección
    int x_intersect = max(A[0], B[0]);
    int y_intersect = max(A[1], B[1]);
    int ancho_intersect = min(A[0] + A[2], B[0] + B[2]) - x_intersect;
    int alto_intersect = min(A[1] + A[3], B[1] + B[3]) - y_intersect;

    // Si hay intersección (ancho y alto positivos), llenamos el arreglo C con los datos de intersección
    if (ancho_intersect > 0 && alto_intersect > 0) {
        C[0] = x_intersect;
        C[1] = y_intersect;
        C[2] = ancho_intersect;
        C[3] = alto_intersect;
    } else {
        // Si no hay intersección, establecemos ancho y alto en 0
        C[0] = C[1] = C[2] = C[3] = 0;
    }
}

int main() {
    // Definir los dos rectángulos A y B
    int A[4], B[4];
    cout << "Ingrese los datos del rectángulo A (x, y, ancho, alto): ";
    cin >> A[0] >> A[1] >> A[2] >> A[3];
    cout << "Ingrese los datos del rectángulo B (x, y, ancho, alto): ";
    cin >> B[0] >> B[1] >> B[2] >> B[3];

    // Arreglo para almacenar el rectángulo de intersección C
    int C[4];

    // Calcular la intersección
    interseccionRectangulos(A, B, C);

    // Mostrar el resultado
    if (C[2] > 0 && C[3] > 0) {
        cout << "El rectángulo de intersección C es: ";
        cout << "(x, y): (" << C[0] << ", " << C[1] << "), ";
        cout << "ancho: " << C[2] << ", alto: " << C[3] << endl;
    } else {
        cout << "Los rectángulos A y B no tienen intersección." << endl;
    }

    return 0;
}


