// Taller 1_2024.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <string>
#include <typeinfo>
#include <sstream>
#include "Reservas.h"
#include "Asistentes.h"
using namespace std;

static vector<Reservas> Lectura_Reservas() {
    vector<Reservas> Lista;
    string linea;
    // estructura para generar una variable archivo
    ifstream arch("Reservas.txt");
    if (!arch) {
        cout << "No se encontro archivo de Reservas";
        return Lista;
    }

    while (getline(arch,linea)) {
        // datos para rellenar el vector
        string tipo;
        int cantidad_De_Asistentes;
        vector<string> Lista_Asistentes;
        string datos_Adicionales;

        istringstream iss(linea);

        string token;

        vector<string> vec;  // Usar un vector dinámico para almacenar los tokens
        // hacer la separacion
        while (getline(iss, token, ',')) {
            vec.push_back(token);
           
        }
         
        tipo = vec[0];

        cantidad_De_Asistentes = stoi(vec[1]);
        int i;
        for (i = 2; i < cantidad_De_Asistentes; i++) {
           
            Lista_Asistentes.push_back(vec[i + 2]);

        }
        i += 2;
        string duracion = vec[i];
        string nombre = vec[i + 1];
        string lugar = vec[i + 2];
        cout << duracion;
        for (int i = cantidad_De_Asistentes + 5; i < vec.size(); i++) {
            
            datos_Adicionales = datos_Adicionales + vec[i];
            if (i < vec.size() - 1) {
                datos_Adicionales = datos_Adicionales + ",";
            }
           
        }
        // vamos a ver
        // crear y rellear objeto Reservas
        // Reservas(tipo_,Lista_Asistentes,duracion_,nombre_,lugar_,otros_);
        Reservas reserva =  Reservas(tipo,Lista_Asistentes,duracion,nombre,lugar,datos_Adicionales);
        Lista.push_back(reserva);

        cout << reserva.mostrarInformacion()<<endl;
        // Agregar a la lista 
        //mi control z te afecta ? parece que no, ten en cuenta que estas "viendome"  ( mano te deje todo en tipo,rut,nombre,fono,datos_ad A ok
        // revisa que las reservas tengan para guardar el vector de asistentes vector<string>
    }
    return Lista;
}

static vector<Asistentes> Lectura_Astsitentes() {
    
    vector<Asistentes> Lista;
    string linea;
    // estructura para generar una variable archivo
    ifstream arch("Asistentes.txt");
    if (!arch) {
        cout << "No se encontro archivo de Asistentes";
    }

    while (getline(arch, linea)) {
        istringstream iss(linea);

        string token;

        vector<string> vec;  // Usar un vector dinámico para almacenar los tokens
        // hacer la separacion
        while (getline(iss, token, ',')) {
            vec.push_back(token);
            
        }
        // datos para rellenar el vector
        string tipo, rut, nombre, fono,datos_adicionales;
        tipo = vec[0];
        rut = vec[1];
        nombre = vec[2];
        fono = vec[3];
        for (int i = 4; i < vec.size(); i++) {
            datos_adicionales = datos_adicionales + vec[i];
            if (i < vec.size() - 1) {
                datos_adicionales = datos_adicionales + ",";
            }
        }
        // se crea el objeto asistentes
        // se rellena el vector de los asistentes
    }
    
    return Lista;
}

static void menu() {
    // lista de eventos
    vector<Reservas> Lista_Reservas;
    //lectura de Reservas
    Lista_Reservas = Lectura_Reservas();
    // Lista de asistentes
    vector<Asistentes> Lista_Asistentes;
    // lectura de asistentes
    Lista_Asistentes = Lectura_Astsitentes();

    // iniciamos el menu
    int option = 0 ;
    while (option != 5) {
        cout << "********** Menu **********" << endl;
        cout << "1) Consultar lista de asistentes" << endl;
        cout << "2) Registrar asistente" << endl;
        cout << "3) Hacer informes" << endl;
        cout << "4) Hacer evento" << endl;
        cout << "5) salir y guardar" << endl;
        cout << "*******************************" << endl;

        cout << "Opcion: "; cin >> option ;

        switch (option) 
        {
        case 1:
            //consultar la lista de asistentes
            break;
        
        case 2:
            //Registrar asistente
            break;
            
        case 3:
            //hacer informes
            break;

        case 4:
            //Hacer evento
            break;

        case 5:
            //guardar y salir
            break;

        default:
            cout << "Ingresa una opcion del menu!" << endl;
            break;
        }
    
    }

}

// Inicio de sesion de un unico admin
static void Inicio_De_Sesion() {
    string name, Password;
    while (name != "Jose" || Password != "123123") {

        cout << "Username:"; cin >> name;
        cout << "Password:"; cin >> Password;

        if (name != "Jose" || Password != "123123") {
            cout << "Contraseña o nombre incorrecto" << endl;
            cout << "------------------------------" << endl;
        }
    }
   
    menu();

}

// inicio del programa
int main()
{
    Inicio_De_Sesion();
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
