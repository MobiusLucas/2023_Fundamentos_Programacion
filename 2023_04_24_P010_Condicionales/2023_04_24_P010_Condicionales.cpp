// 2023_04_24_P010_Condicionales.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
int main()
{
	int edad;
	float peso;
	double altura;
	string cd, estado, pais, name, check, genero;
	bool confirm = true;

	do
	{
		cout << "Quieres comprobar los datos? \n";
		cout << "Si/No \n";
		cin >> check;

		if (check == "Si") {
			cout << "Confirmar Nombre \n";
			cin >> name;
			if (name == "Max") {
				cout << "Correcto \n";
				cout << "Confirma Edad \n";
				cin >> edad;
				if (edad == 21) {
					cout << "Correcto, Prosigue \n";
					cout << "Confirma Peso en Kg \n";
					cin >> peso;
					if (peso <= 80) {
						cout << "La verdad no se cuanto peso pero asumamos es correcto \n";
						cout << "Confirma Genero M/F \n";
						cin >> genero;
						if (genero == "M") {
							cout << "Correcto \n";
							cout << "Confirma Altura en Metros y Centimetros \n";
							cin >> altura;
							if (altura <= 1.75) {
								cout << "Correcto \n";
								cout << "Confirma el pais \n";
								cin >> pais;
								if (pais == "Mexico") {
									cout << "Simon \n";
									cout << "Confirma el estado \n";
									cin >> estado;
									if (estado == "Jalisco") {
										cout << "Correcto, Tortadas Ahogadas y la Madre \n";
										cout << "Confirma la Ciudad \n	";
										cin >> cd;
										if (cd == "Guadalajara") {
											cout << "Correcto! \n";
											cout << "Felicidades!, Terminaste la Comprobacion de Datos! \n";
											confirm = false;
										}
									}
									else {
										"Incorrecto, Intenta de Nuevo";
										confirm = false;
									}

								}
								else {
									cout << "Yo soy Mexicano";
									confirm = false;
								}
							}
							else {
								cout << "No soy un hobbit \n";
								confirm = false;

							}
						}
						else {
							cout << "Yo le voy al Necaxa";
							confirm = false;

						}
					}
					else {
						cout << "No soy gordo profesional, nmms \n";
						confirm = false;
					}
				}
				else {
					cout << "Incorrecto, Intenta de nuevo";
					confirm = false;
				}
			}
			else {
				cout << "Incorrecto, Intenta de nuevo";
				confirm = false;
			}
		}
		else {
			if (check == "No")
			{
				confirm = false;
			}
		}


	} while (confirm == true);
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
