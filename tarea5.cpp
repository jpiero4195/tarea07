//Author: Jean Valencia
//fecha: 2024-06-28
/*
Resuelva los siguientes ejercicios:

Se tiene un vector de N nombres de personas. 
Diseñe la función que retorne el nombre de una persona aleatoriamente.
*/

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

// Función para retornar un nombre aleatorio de un vector
string ObtenerNombreAleatorio(const vector<string>& nombres) {
    if(nombres.empty()){
        return ""; // Retorna una cadena vacía si el vector está vacío
    }
    int indiceAleatorio = rand() % nombres.size();
    return nombres[indiceAleatorio];
}

int main(){
    srand(time(NULL)); // Inicializa la semilla para los números aleatorios

    // Vector de nombres de ejemplo
    vector<string> nombres = {"Ana", "Luis", "Carlos", "Marta", "Jose", "Lucia", "Pedro", "Sofia"};

    // Llamada a la función para obtener un nombre aleatorio
    string nombreAleatorio = ObtenerNombreAleatorio(nombres);

    // Imprimir el nombre aleatorio seleccionado
    if (!nombreAleatorio.empty()) {
        cout<<"Nombre aleatorio seleccionado: "<<nombreAleatorio<<endl;
    } else {
        cout<<"El vector de nombres está vacío."<<endl;
    }

    return 0;
}
