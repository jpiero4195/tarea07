//Author: Jean Valencia
//fecha: 2024-06-28
/*
Resuelva los siguientes ejercicios:

6)Diseñe la función que invierte el orden de los elementos de un vector.

Por ejemplo, si el vector tiene estos elementos: 10, 3, 6, 78, 19, 100, 14

la función debe invertirlos de esta forma:  14, 100, 19,  78, 6, 3, 10
*/

#include <iostream>
#include <vector>
using namespace std;

// Función para invertir el orden de los elementos de un vector
void InvertirVector(vector<int>& vec) {
    int n = vec.size();
    for (int i = 0; i < n / 2; ++i) {
        swap(vec[i], vec[n - 1 - i]);
    }
}

// Función para imprimir los elementos del vector
void ImprimirVector(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> vec = {10, 3, 6, 78, 19, 100, 14};

    cout << "Vector original: ";
    ImprimirVector(vec);

    InvertirVector(vec);

    cout << "Vector invertido: ";
    ImprimirVector(vec);

    return 0;
}
