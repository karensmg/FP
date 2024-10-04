// enteros.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <limits>
#include <iomanip>
#include <locale>
#include <string>
using namespace std;

int main() 

{
    // Manejo de punto decimal y separador de miles
    locale loc("");
    cout.imbue(loc);
    // Declarar e imprimir 
    // una variable string 
    string texto0 = "Hola Mundo";
    cout << texto0 << endl;
    // Union de dos variables
    //tipo string
    string tipoa = "Heloo";
    string tipob = "World!";
    cout << texto0 << endl;
    //introducir una valor en una variable
    // variable tipo string
    // e imprimirlo
    string nombre;
    cout << "Dame tu nombre : ";
    cin >> nombre; 
    cout << "Hola" << nombre << endl;
    cin >> nombre;
    cout << "Hola" << nombre << endl;
    // Introducir una linea
    cin.ignore();
    string nombreCompleto;
    cout << "Dame tu nombre Completo:";
    getline(cin, nombreCompleto); 
    cout << " tu nombre completo:"
        << nombreCompleto << endl;

    // acceso a un caracter específico
    cout << nombre[9] << endl;

   

    
    return 0;
}
