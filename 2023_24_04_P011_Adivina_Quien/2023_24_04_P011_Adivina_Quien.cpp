// 2023_24_04_P011_Adivina_Quien.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

int main()
{

    string check, confirmador;
    cout << "Piensa en uno de los siguientes Pokemon y lo Adivinare! \n" << endl;
    cout << "Tipo Fuego: \nArcanine \nCharizard \nMoltres \nRapidash \n" << endl;
    cout << "Tipo Electrico: \nPikachu \nZapdos \nVoltorb \nMagneton \n" << endl;
    cout << "Tipo Agua: \nSquirtle \nLapras \nMagikarp \nPsyduck \n" << endl;
    cout << "Tipo Tierra: \nNidoking \nRhydon \nCubone \nDigglet \n" << endl;
    cout << "Listo? \n";
    cout << "Escribe si para continuar \n";
    cin >> check;
    if (check == "si") {

        cout << "Tu pokemon es tipo electrico o fuego? \n";
        cout << "si/no \n";
        cin >> confirmador;
        //Identificador Electrico o Fuego
        if (confirmador == "si") {
            confirmador = "no";
            cout << "Tu pokemon es tipo fuego? \n";
            cout << "si/no \n";
            cin >> confirmador;
            //Preguntas tipo Fuego
            if (confirmador == "si") {
                confirmador = "no";
                cout << "Tu pokemon puede volar? \n";
                cout << "si/no \n";
                cin >> confirmador;

                if (confirmador == "si") {
                    confirmador = "no";
                    cout << "Tu pokemon parece un dragon? \n";
                    cout << "si/no \n";
                    cin >> confirmador;

                    if (confirmador == "si") {
                        cout << "Tu pokemon es Charizard! \n";
                    }
                    else {
                        cout << "Tu pokemon es Moltres! \n";
                    }
                }
                else {
                    confirmador = "no";
                    cout << "Tu pokemon parece un caballo? \n";
                    cout << "si/no \n";
                    cin >> confirmador;

                    if (confirmador == "si") {
                        cout << "Tu pokemon es Rapidash! \n";
                    }
                    else {
                        cout << "Tu pokemon es Arcanine! \n";
                    }
                }

            }
            // Preguntas Pokemon Electricos
            else {
                cout << "Tu pokemon es de color amarillo con negro? \n";
                cout << "si/no \n";
                cin >> confirmador;

                if (confirmador == "si") {
                    confirmador = "no";
                    cout << "Tu pokemon parece un pajaro? \n";
                    cout << "si/no \n";
                    cin >> confirmador;

                    if (confirmador == "si") {
                        cout << "Tu pokemon es Zapdos! \n";
                    }
                    else {
                        cout << "Tu pokemon es Pikachu! \n";
                    }
                }
                else {
                    cout << "Tu pokemon parece una pokebola? \n";
                    cout << "si/no \n";
                    cin >> confirmador;

                    if (confirmador == "si") {
                        cout << "Tu pokemon es Voltorb!";
                    }
                    else {
                        cout << "Tu pokemon es Magneton!";
                    }
                }
            }
        }
        // Identificador Tipo Agua o Tierra
        else {
            cout << "Tu pokemon es tipo agua? \n";
            cout << "si/no \n";
            cin >> confirmador;
            // Inicio Preguntas Tipo Agua
            if (confirmador == "si") {
                confirmador = "no";
                cout << "Tu pokemon tiene Caparazon? \n";
                cout << "si/no \n";
                cin >> confirmador;

                if (confirmador == "si") {
                    cout << "Tu pokemon se parece al monstruo del lago ness? \n";
                    cout << "si/no \n";
                    cin >> confirmador;
                    if (confirmador == "si") {
                        cout << "Tu pokemon es Lapras! \n";
                    }
                    else {
                        cout << "Tu pokemon es Squirtle! \n";
                    }
                }
                else {
                    cout << "Tu pokemon parece un pato? \n";
                    cout << "si/no \n";
                    cin >> confirmador;
                    if (confirmador == "si") {
                        cout << "Tu pokemon es Psyduck! \n";
                    }
                    else {
                        cout << "Tu pokemon es Magikarp! \n";
                    }
                }
            }
            // Inicio Preguntas Tipo Tierra
            else {
                cout << "Tu pokemon tiene un cuerno? \n";
                cout << "si/no \n";
                cin >> confirmador;
                if (confirmador == "si") {
                    confirmador = "no";
                    cout << "Tu pokemon es morado? \n";
                    cout << "si/no";
                    cin >> confirmador;
                    if (confirmador == "si") {
                        cout << "Tu pokemon es Nidoking! \n";
                    }
                    else {
                        cout << "Tu pokemon es Rhydon! \n";
                    }
                }
                else {
                    cout << "Tu pokemon lleva puesto un craneo? \n";
                    cout << "si/no";
                    cin >> confirmador;
                    if (confirmador == "si") {
                        cout << "Tu pokemon es Cubone! \n";
                    }
                    else {
                        cout << "Tu pokemon es Digglet! \n";
                    }
                }
            }

        }
        cout << "Gracias por Jugar!" << endl;
    }
    else {
        cout << "Vuelve ya que estes listo! \n";
    }
}



