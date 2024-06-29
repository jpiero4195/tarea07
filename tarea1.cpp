//Author: Jean Valencia
//fecha: 2024-06-28
/*
Resuelva los siguientes ejercicios:

1) Convierta la siguiente función en recursiva
int Contar(int num)
{
    int n=1, cont=0;
    while(n <= num)
    {
        n=n*10;
        cont++;
    }
    return cont;
}
*/

#include<iostream>
using namespace std;

//Factoria con bucle
int ContarRecursivo(int num, int cont=0){
    if (num < 1) {
        return cont;
    }
    return ContarRecursivo(num / 10, cont + 1);
}

int main(){
    int numero = 1000;
    cout << "El número " << numero << " tiene " << ContarRecursivo(numero) << " dígitos." << endl;
    return 0;
}