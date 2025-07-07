//Producto de dos matrices 
/*Implemente un programa que multiplique dos matrices de 3x3 y muestre el 
resultado, y muestre las dos matrices y su resultado en horizontal */

#include <iostream>
using namespace std;

void leermatrices(int matrizB[][3], int matrizA[][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> matrizA[i][j];
        }       
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> matrizB[i][j];
        }
    }
}

void producto(int matrizB[][3], int matrizA[][3], int matrizC[][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            matrizC[i][j] = 0;
            for (int k = 0; k < 3; k++){
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
            
        }       
    }
}
void mostrarmatriz(int matrizB[][3], int matrizA[][3], int matrizC[][3]){
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrizA[i][j] << " ";
            cout << char(9);
        }
        for (int j = 0; j < 3; j++) {
            cout << char(9) << matrizB[i][j] << " ";
        }
        for (int j = 0; j < 3; j++) {
            cout << char(9) << matrizC[i][j] << " ";
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