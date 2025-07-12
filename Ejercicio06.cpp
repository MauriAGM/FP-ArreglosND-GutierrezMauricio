//Reflejar una Imagen: 
/*Implemente un programa que refleje horizontalmente una imagen
representada por una matriz de 6x6. El programa debe intercambiar los elementos de cada fila para
obtener la imagen reflejada*/

#include <iostream>
using namespace std;

void leermatriz(int matriz[][6]){
    cout << "INGRESA LOs VALORES PARA LA MATRIZ \n" << endl;
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 6; j++){
            cout << "Ingresa el valor para la matriz[" << i << "][" << j << "]: "; 
            cin >> matriz[i][j];
        }       
    }
}
void mostrarmatriz(int matriz[][6]) {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            cout << matriz[i][j] << "\t";
        } 
        cout << endl;
    }
}
void reflejarHorizontalmente(int matriz[][6]) {
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6 / 2; j++) {
            int temp = matriz[i][j];
            matriz[i][j] = matriz[i][6 - 1 - j];
            matriz[i][6 - 1 - j] = temp;
        }
    }
}
int main() {
    int matriz[6][6];
    leermatriz(matriz);
    cout << "\nImagen original:\n";
    mostrarmatriz(matriz);
    reflejarHorizontalmente(matriz);
    cout << "\nImagen reflejada horizontalmente:\n";
    mostrarmatriz(matriz);
    return 0;
}
