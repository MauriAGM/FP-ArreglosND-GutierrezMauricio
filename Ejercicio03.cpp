//Suma de diagonales 
/*Desarrolle un programa que sume los elementos de las dos diagonales de una
matriz de 4x4 y muestre el resultado*/

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
void sumardiagonales(int matriz[][4]){
    int sumaPrincipal = 0;
    int sumaSecundaria = 0;
    for (int i = 0; i < 4; i++) {
        sumaPrincipal += matriz[i][i];                
        sumaSecundaria += matriz[i][4 - 1 - i];     
    }
    cout << "\nSuma de la diagonal principal: " << sumaPrincipal << endl;
    cout << "Suma de la diagonal secundaria: " << sumaSecundaria << endl;
    cout << "Suma total de ambas diagonales: " << (sumaPrincipal + sumaSecundaria) << endl;
}

int main(){
    int matriz[4][4];
    leermatriz(matriz);
    sumardiagonales(matriz);
    return 0;
}