// 2023_03_22_003_INOUT_V1.cpp 
//Max Vargas Ceja
//En este programa aprenderemos a usar bibliotecas
//Reforzaremos el hablar con el usuario
//Recibiremos datos del usuario

#include <iostream>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "es_MX.UTF-8");

	std::string name_tacos;
	bool pregunta = false;
	float	precio_tacos;
	int	n_tacos = 0;
    char usuario[10]; 
	
	std::cout << "Hola Bienvenido a tu programa...";
	std::cout << "Lea y responda con verdadero o falso: \n" <<
		"Anoche ceno tacos? Escribe 0 para No 1 para Si" << std::endl;
   // Recibir respustas del usuario
	std::cout << "Ya veo entonces es " << pregunta << " que cenaste tacos " <<
		std::endl;
	std::cin >> pregunta;
	std::cout << "Cuantos tacos? " << std::endl;
    std::cin >> n_tacos;
	std::cout << "baia baia entonces te comiste " << n_tacos << std::endl;
	std::cout << "En cuanto te salio cada taco? " << std::endl;
	std::cin >> precio_tacos;
	std::cout << precio_tacos << " Que buenos precios " << std::endl;
	std::cout << "De que eran los tacos? " << std::endl;
	std::cin >> name_tacos;
	std::cout << "A que ricos tacos de " << name_tacos << std::endl;
	std::cout << "Y cual es tu primer nombre usuario? " << std::endl;
	std::cin >> usuario;
	std::cout << "Muchas gracias por compartir tu experiencia de tacos conmigo " << usuario << std::endl;

}


