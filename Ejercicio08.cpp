//// Espiral de Matriz
/*Escribe un programa que recorra los elementos de una matriz cuadrada de 5x5
en orden espiral, comenzando en la esquina superior izquierda en sentido horario.*/

#include <iostream>
using namespace std;

void leermatriz(int matriz[][5]) {
    cout << "INGRESA LOS VALORES PARA LA MATRIZ 5x5\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

// Recorrido en espiral
void recorrerEspiral(int matriz[][5]) {
    int filaInicio = 0, filaFin = 5 - 1;
    int colInicio = 0, colFin = 5 - 1;

    cout << "\nRecorrido en espiral:\n";

    while (filaInicio <= filaFin && colInicio <= colFin) {
        // 1. De izquierda a derecha (fila superior)
        for (int col = colInicio; col <= colFin; col++) {
            cout << matriz[filaInicio][col] << " ";
        }
        filaInicio++;

        // 2. De arriba hacia abajo (columna derecha)
        for (int fila = filaInicio; fila <= filaFin; fila++) {
            cout << matriz[fila][colFin] << " ";
        }
        colFin--;

        // 3. De derecha a izquierda (fila inferior)
        if (filaInicio <= filaFin) {
            for (int col = colFin; col >= colInicio; col--) {
                cout << matriz[filaFin][col] << " ";
            }
            filaFin--;
        }

        // 4. De abajo hacia arriba (columna izquierda)
        if (colInicio <= colFin) {
            for (int fila = filaFin; fila >= filaInicio; fila--) {
                cout << matriz[fila][colInicio] << " ";
            }
            colInicio++;
        }
    }

    cout << endl;
}

int main() {
    int matriz[5][5];
    leermatriz(matriz);
    recorrerEspiral(matriz);
    return 0;
}
