//Author: Jean Valencia
//fecha: 2024-06-28
/*
Resuelva los siguientes ejercicios:

2) Diseñe la función que calcula la sumatoria de N 
elementos enteros almacenados en un vector. 
También diseñe la función que calcule el promedio de esos elementos.
*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// Función para generar N números aleatorios y almacenarlos en un vector
void GenerarNumerosAleatorios(vector<int>& vec,int N){
    for(int i=0;i<N;++i) {
        vec.push_back(rand() % 100); // Genera números aleatorios entre 0 y 99
    }
}

// Función para imprimir los elementos del vector
void ImprimirNumeros(const vector<int>& vec){
    for(int num : vec){
        cout<<num<<" ";
    }
    cout<<endl;
}

// Función para calcular la sumatoria de los elementos de un vector
int CalcularSumatoria(const vector<int>& vec){
    int sumatoria = 0;
    for(int num:vec){
        sumatoria += num;
    }
    return sumatoria;
}

// Función para calcular el promedio de los elementos de un vector
double CalcularPromedio(const vector<int>& vec){
    int sumatoria = CalcularSumatoria(vec);
    return static_cast<double>(sumatoria) / vec.size();
}

int main() {
    srand(time(NULL)); // Inicializa la semilla para los números aleatorios

    int N;
    cout<<"Ingrese el número de elementos: ";
    cin>>N;

    vector<int> numeros;
    GenerarNumerosAleatorios(numeros, N);
    
    cout<<"Los números generados son: ";
    ImprimirNumeros(numeros);
    
    int sumatoria = CalcularSumatoria(numeros);
    double promedio = CalcularPromedio(numeros);
    
    cout<<"Sumatoria: "<<sumatoria<<endl;
    cout<<"Promedio: "<<promedio<<endl;

    return 0;
}
