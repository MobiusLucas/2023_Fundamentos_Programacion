// 2023_04_24_P009_Calculadora.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

int main()
{
    int dato1;
    int dato2;
    int dato3;
    int opcion;
    std::cout << "Que opcion quieres realizar?: \n 0.Multiplicacion \n 1.Suma \n 2.Division \n 3.Valor Absoluto \n 4.Valor mayor o menor \n" ;
    std::cout << "Para escoger algo solo ingresa el numero de la opcion y presiona enter\n";
    std::cin >> opcion;

    //Sintaxis del Switch Case

    switch (opcion) {
    case 0:
        std::cout << "Estas en multiplicacion \n";
        std::cout << "Ingresa el primer dato \n";
        std::cin >> dato1;
        std::cout << "Ingresa el segundo dato \n";
        std::cin >> dato2;
        dato3 = dato1 * dato2;
        std::cout << "El resultado es " << dato3;
        break;
    case 1:
        std::cout << "Estas en suma \n";
        std::cout << "Ingresa el primer dato \n";
        std::cin >> dato1;
        std::cout << "Ingresa el segundo dato \n";
        std::cin >> dato2;
        dato3 = dato1 + dato2;
        std::cout << "El resultado es " << dato3;
        break;
    case 2:
        std::cout << "Estas en division \n";
        std::cout << "Ingresa el primer dato \n";
        std::cin >> dato1;
        std::cout << "Ingresa el segundo dato \n";
        std::cin >> dato2;
        dato3 = dato1 / dato2;
        std::cout << "El resultado es " << dato3;
        break;
    case 3:
        std::cout << "Estas en Valor Absoluto \n";
        std::cout << " Ingresa el dato \n";
        std::cin >> dato1;
        if (dato1 <= 0) {
            dato3 = dato1 * -1;
            std::cout << "el valor absoluto es " << dato3;
        }
        else {
            dato3 = dato1;
            std::cout << "el valor absoluto es " << dato3;
        }
        break;
    case 4:
        std::cout << "Estas en Valor mayor o menor \n";
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
        break;
    default:
        std::cout << "ingresaste algo que no tengo contemplado..... \n";
        break;
    }

}

