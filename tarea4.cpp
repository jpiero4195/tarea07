//Author: Jean Valencia
//fecha: 2024-06-28
/*
Resuelva los siguientes ejercicios:

4)  El vector X tiene los siguientes elementos: {10, 12, 6, 7, 15, 7, 9, 19}

Diseñe la función que imprime una barra vertical por cada elemento del vector. Por ejemplo:

* * * * * * * * * * (10)

* * * * * * * * * * * * (12)

* * * * * * (6)

* * * * * * * (7)

* * * * * * * * * * * * * * *(15) 

etc. (usted debe decidir el carácter que se imprime)
*/

#include <iostream>
#include <vector>
using namespace std;

// Función para imprimir una barra vertical por cada elemento del vector
void ImprimirBarras(const std::vector<int>& vec){
    for(int num : vec){
        for(int i = 0; i < num; ++i){
            cout << "* ";
        }
        cout<<"(" << num << ")"<<endl;
    }
}

int main() {
    vector<int> X = {10, 12, 6, 7, 15, 7, 9, 19};

    cout<<"Barras verticales por cada elemento del vector:"<<endl;
    ImprimirBarras(X);

    return 0;
}
