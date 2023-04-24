// 2023_04_24_P002_Valor_Absoluto.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    std::cout << "Hola, Te ayudare a encontrar el Valor Absoluto del numero que proporciones\n";
    std::cout << "Ingresa tu variable\n";
    int dato1;
    int dato2;
    std::cin >> dato1;
    if (dato1 <= 0) {
        dato2 = dato1 * -1;
        std::cout << "el valor absoluto es " << dato2;
    }
    else {
        dato2 = dato1;
        std::cout << "el valor absoluto es " << dato2;
    }
}


