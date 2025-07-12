//Rotación de una Imagen Representada por una Matriz
/*Escriba un programa que rote una matriz de 4x4, 
representando una imagen, 90 grados en sentido horario.*/

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
void mostrarmatriz(int matriz[][4]) {
    cout << "\nMATRIZ RESULTANTE:\n";
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matriz[i][j] << "  ";
        }
        cout << endl;
    }
}
void rotarMatriz90(int matriz[][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            int temp = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = temp;
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 / 2; j++) {
            int temp = matriz[i][j];
            matriz[i][j] = matriz[i][4 - 1 - j];
            matriz[i][4- 1 - j] = temp;
        }
    }
}
int main() {
    int matriz[4][4];
    leermatriz(matriz);
    cout << "\nMatriz original:\n";
    mostrarmatriz(matriz);
    rotarMatriz90(matriz);
    cout << "\nMatriz rotada 90 grados:\n";
    mostrarmatriz(matriz);
    return 0;
}
