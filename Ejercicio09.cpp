// Cuadrado Latino de orden N
/*Programa que imprime un cuadrado latino de orden N. Un cuadrado latino de orden N es una matriz
cuadrada en la que la primera fila contiene los N primeros números naturales y cada una de las
siguientes N-1 filas contiene la rotación de la fila anterior un lugar a la derecha. Ejemplo: Cuadrado
latino de orden 4*/

#include <iostream>
using namespace std;

void imprimirCuadradoLatino(int N) {
    int matriz[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = ((j - i + N) % N) + 1;
        }
    }
    // Mostrar la matriz
    cout << "\nCuadrado latino de orden " << N << ":\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}
int main() {
    int N;
    cout << "Ingrese el orden del cuadrado latino (N): ";
    cin >> N;
    imprimirCuadradoLatino(N);
    return 0;
}
