// 2023_04_24_P003_Mayor_Menor_Que.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    int dato1;
    int dato2;

    std::cout << "Hola, Te ayudare a identificar cuales de los numeros que proporciones es mayor o menor \n";
    std::cout << " Ingresa el primer dato \n";
    std::cin >> dato1;
    std::cout << "Ingresa el segundo dato \n";
    std::cin >> dato2;
    if (dato1 == dato2) {
        std::cout << "Los valores son identicos \n";
    }
    else {
        if (dato1 > dato2) {
            std::cout << dato1 << " Es mayor que " << dato2 << "\n";
            std::cout << dato2 << " Es menor que " << dato1 << "\n";
        }
        else {
            std::cout << dato2 << " Es mayor que  " << dato1 << "\n";
            std::cout << dato1 << " Es menor que  " << dato2 << "\n";
        }
    }
}
