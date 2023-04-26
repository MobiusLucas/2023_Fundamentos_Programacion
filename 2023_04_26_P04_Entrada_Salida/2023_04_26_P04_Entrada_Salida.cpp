// 2023_04_26_P04_Entrada_Salida.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
#include <math.h>
int main()

{
    bool Alergico = false;
    bool Hijos = false;
    bool Genero = false;
    string GeneroM = "Hombre";
    string GeneroF = "Mujer";
    string Nombre;
    string Apellido;
    int Edad;
    int Alergias;
    float IMC;
    float Altura;
    float Peso;
    float cuadrado = 2;
    float AlturaCuadrada;


    cout << "Bienvenido Paciente porfavor llene el siguiente formulario y en un momento lo atenderemos \n";
    // string#1
    cout << "Cual es tu nombre? \n";
    cin >> Nombre;
    // char
    cout << "Apellido? \n";
    cin >> Apellido;
    cout << "Gracias " << Nombre << " " << Apellido << "\n";
    // bool #1
    cout << "Cual es tu Sexo? Escriba 0 para Mujer o Escriba 1 para Hombre \n";
    cin >> Genero;
    if (Genero == true) {
        cout << "Muy bien, confirmo eres " << GeneroM << "\n";
    }
    else {
        cout << "Muy bien, confirmo eres " << GeneroF << "\n";
    }
    // int#1 
    cout << "Cual es tu edad? \n";
    cin >> Edad;
    cout << "Muy bien, confirmo tu edad es " << Edad << "\n";
    // bool #2
    cout << "Tienes Hijos? Escriba 0 para No o Escriba 1 para Si \n";
    cin >> Hijos;
    if (Hijos == true) {
        cout << "Confirmo que tienes hijos \n";
    }
    else {
        cout << "Confirmo que No tienes hijos \n";
    }
    // float 1 & 2   
    cout << "Cuanto Mides? \n";
    cin >> Altura;
    cout << "Cuanto Pesas \n";
    cin >> Peso;
    
    //bool #3 y int #2
    cout << "Eres alergico a algun medicamento? Escribe 0 para No o Escriba 1 para Si \n";
    cin >> Alergico;
    if (Alergico == true) {
        cout << "Entendido, a que medicamento eres alergico? \n";
        cin >> Alergias;
        cout << "Confirmo eres alergico a " << Alergias << " \n";
    }
    else {
        cout << "Confirmo, no eres alergico \n";
    }

    AlturaCuadrada = pow(Altura, cuadrado);
    // IMC 
    IMC = Peso / AlturaCuadrada;
    cout << "Perfecto, porfavor espere a ser atendido a la brevedad, como dato curioso su Indice de Masa Corporal es " << IMC << "\n";

}

