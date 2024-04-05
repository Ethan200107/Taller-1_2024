#pragma once
#include <iostream>
#include <string>
using namespace std;
    class Asistentes{ 
    private:
        string nombre,tipo,rut,telefono,datos_ad;

    public:
        Asistentes(string tipo_,string rut_, string nombre_, string telefono_, string datos_ad );
        string getNombre();
        void setNombre(string nom);
        string getTipo();
        void setTipo(string tip);
        string getRut();
        void setRut(string ru);
        string getTelefono();
        void setTelefo(string tel);
        string getDatos();
        void setDatos(string dat);
        string mostrarInformacion();
        


};

