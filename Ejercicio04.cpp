//Intercambio de filas
/*Desarrolle un programa que intercambie dos filas específicas de una matriz
de 4x4 y muestre la matriz resultante*/

#include <iostream>
using namespace std;

void leermatriz(int matriz[][4]){
    cout << "INGRESA LOs VALORES PARA LA MATRIZ \n" << endl;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cout << "Ingresa el valor para la matriz[" << i << "][" << j << "]: "; 
            cin >> matriz[i][j];
        }       
    }
}
void intercambiarFilas(int matriz[][4], int fila1, int fila2) {
    for (int j = 0; j < 4; j++) {
        int temp = matriz[fila1][j];
        matriz[fila1][j] = matriz[fila2][j];
        matriz[fila2][j] = temp;
    }
}
void mostrarmatriz(int matriz[][4]) {
    cout << "\nMATRIZ RESULTANTE:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << "  ";
        }
        cout << endl;
    }
}
int main() {
    int matriz[4][4];
    int fila1, fila2;
    leermatriz(matriz);
    intercambiarFilas(matriz, fila1, fila2);
    mostrarmatriz(matriz);
    return 0;
}