//Author: Jean Valencia
//fecha: 2024-06-28
/*
Resuelva los siguientes ejercicios:

2) Diseñe la función que genera N número aleatorios y 
los almacena en un vector de N elementos enteros. Además, 
diseñe la función que imprima esos N elementos enteros. 
El vector se debe declarar en el main.
*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// Función para generar N números aleatorios y almacenarlos en un vector
void GenerarNumerosAleatorios(vector<int>& vec, int N) {
    for (int i = 0; i < N; ++i) {
        vec.push_back(rand() % 100); // Genera números aleatorios entre 0 y 99
    }
}

// Función para imprimir los elementos del vector
void ImprimirNumeros(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    srand(time(NULL)); // Inicializa la semilla para los números aleatorios
    int N;
    cout << "Ingrese el número de elementos: ";
    cin >> N;

    vector<int> numeros;
    GenerarNumerosAleatorios(numeros, N);
    ImprimirNumeros(numeros);

    return 0;
}
