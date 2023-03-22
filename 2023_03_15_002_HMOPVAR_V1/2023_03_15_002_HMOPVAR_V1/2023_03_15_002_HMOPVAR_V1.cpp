// 2023_03_15_001_HMOPVAR_V1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Max Vargas Ceja
// Hola Mundo, Variables, Operadores Aritmeticos.
//Ejecucion del programa comienza y termina ahi.

#include <iostream>

int main()
{
    std::cout << "Hello World\n"; // Comunicarnos con el usuario
    // \n y con std::endl da saltos de linea
    std::cout << "Hola \nSaltos " << std::endl;
    //Tipos de Variables bool, int, float, char, string
    //Sintaxys para nombrar variables
    //Tipo de Variable - Nombre de Variable - Inicialización
    bool continuar = true;
    int Vida = 100;
    float ataque = 18.5;
    char nombre[15] = "Max";
    std::string namertag = "Mobius";
    // << es concatenar o sumar textos
    std::cout << "Hola " << nombre << " Bienvenido al mundo de " << namertag;

    //Operadores aritmeticos
    // + - * / ^2 raiz 
    Vida = Vida - ataque;
    std::cout << "Tu vida restante es: " << Vida << std::endl;
    float Vida_Aux = 0;
    Vida_Aux = Vida - ataque;
    std::cout << "Tu Vida_Aux restante es: " << Vida_Aux << std::endl;

    

}

