#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Reservas
{
private:
    string lugar, duracion, nombre, tipo, otros;
    vector<Asistentes> Lista_Asistentes;
public:
    Reservas(string tipo_, vector<string> Lista_Asistentes, string duracion_, string nombre_, string lugar_, string otros_);
        string getNombre();
        void setNombre(string nom);
        string getLugar();
        void setLugar(string lug);
        string getDur(); 
        void setDur(string Dura);
        string getTipo();
        void setTipo(string tip);
        string getOtros();
        void setOtro(string otro);
        string mostrarInformacion();
        // hacer el get, set y mostrar lista_Asistentes
    

};