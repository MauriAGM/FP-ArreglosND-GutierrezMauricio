//Producto de dos matrices 
/*Implemente un programa que multiplique dos matrices de 3x3 y muestre el 
resultado, y muestre las dos matrices y su resultado en horizontal */

#include <iostream>
using namespace std;

void leermatrices(int matrizA[][3], int matrizB[][3]){
    cout << "INGRESA LOs VALORES PARA LA MATRIZ A\n" << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << "Ingresa el valor para la matriz[" << i << "][" << j << "]: "; 
            cin >> matrizA[i][j];
        }       
    }
    cout << "\nINGRESE LOS VALORES PARA LA MATRIZ B\n" << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << "Ingresa el valor para la matriz[" << i << "][" << j << "]:"; 
            cin >> matrizB[i][j];
        }
    }
}

void producto(int matrizA[][3], int matrizB[][3], int matrizC[][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            matrizC[i][j] = 0;
            for (int k = 0; k < 3; k++){
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }

        }       
    }
}
void mostrarmatriz(int matrizA[][3], int matrizB[][3], int matrizC[][3]){
    cout << "\nRESULTADO DEL PRODUCTO DE MATRICES\n";
    cout << "             MATRIZ A               MATRIZ B            MATRIZ RESULTANTE\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "\t" << matrizA[i][j];
        }
        for (int j = 0; j < 3; j++) {
            cout << "\t" << matrizB[i][j];
        }
        for (int j = 0; j < 3; j++) {
            cout << "\t" << matrizC[i][j];
        }
        cout << endl;
    }
}
int main(){
    int matrizA[3][3], matrizB[3][3], matrizC[3][3];
    leermatrices(matrizA, matrizB);
    producto(matrizA, matrizB, matrizC);
    mostrarmatriz(matrizA, matrizB, matrizC);
    return 0;
}