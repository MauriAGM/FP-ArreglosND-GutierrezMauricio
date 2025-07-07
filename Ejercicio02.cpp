//Buscar un valor en una matriz 
/*Escriba un programa que busque un valor específico en una matriz de 3x3 y devuelva 
todas las posiciones donde se encuentra, indicando la fila y la columna de cada ocurrencia*/

#include <iostream>
using namespace std;

void leermatriz(int matriz[][3]){
    cout << "INGRESA LOs VALORES PARA LA MATRIZ A\n" << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << "Ingresa el valor para la matriz[" << i << "][" << j << "]: "; 
            cin >> matriz[i][j];
        }       
    }
}
void ocurrencias(int matriz[][3]){
    int valor;
    cout << "INGRESE EL VALOR A BUSCAR" << endl;
    cin >> valor;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (matriz[i][j] == valor){
                cout << "El valor " << valor << " se encuentra en:" << endl;
                cout << "Fila " << i << ", Columna " << j << endl;
            }
        }
    }
}
int main(){
    int matriz[3][3];
    leermatriz(matriz);
    ocurrencias(matriz);
    return 0;
}