//Buscar el Máximo y Mínimo
/*Escriba un programa que encuentre el valor máximo y el valor
mínimo en una matriz de 4x4, indicando sus posiciones.*/
#include <iostream>
using namespace std;


void leermatriz(int matriz[][4]) {
    cout << "INGRESA LOS VALORES PARA LA MATRIZ 4x4\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void buscarMaxMin(int matriz[][4]) {
    int max = matriz[0][0];
    int min = matriz[0][0];
    int filaMax = 0, colMax = 0;
    int filaMin = 0, colMin = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > max) {
                max = matriz[i][j];
                filaMax = i;
                colMax = j;
            }
            if (matriz[i][j] < min) {
                min = matriz[i][j];
                filaMin = i;
                colMin = j;
            }
        }
    }

    cout << "\nValor máximo: " << max << " en posición [" << filaMax << "][" << colMax << "]\n";
    cout << "Valor mínimo: " << min << " en posición [" << filaMin << "][" << colMin << "]\n";
}

int main() {
    int matriz[4][4];
    leermatriz(matriz);
    buscarMaxMin(matriz);
    return 0;
}