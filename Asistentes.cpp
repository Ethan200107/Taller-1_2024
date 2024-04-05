#include "Asistentes.h"
#include <string>
    Asistentes:: Asistentes(string nombre_,string tipo_,string rut_ , string telefono_, string datos_){
        string nombre =nombre_;
        string tipo =tipo_;
        string rut =rut_;
        string telefono =telefono_;
        string datos_ad =datos_;
        //v esto en reservas ->
    }
    string Asistentes::getNombre(){
        return nombre;
    }
 
    void Asistentes::setNombre(string nom){
        nombre= nom;
    }
    string Asistentes::getTipo(){
        return tipo;
    }
    void Asistentes::setTipo(string tip){
        tipo= tip;
    }

    string Asistentes::getRut(){
        return rut;
    }
    void Asistentes::setRut(string ru){
        rut= ru;
    }
    string Asistentes::getTelefono(){
        return telefono;
    }
    void Asistentes::setTelefo(string tel){
        telefono= tel;
    }
    string Asistentes::getDatos(){
        return datos_ad;
    }
    void Asistentes::setDatos(string dat){
        datos_ad= dat;
    }
    string Asistentes::mostrarInformacion()
    {
        string ss = "Nombre: " + nombre + " ,Rut: " + rut + " ,Tipo: " + tipo + " ,Telefono: " + telefono + ", y tambien tiene: " + datos_ad;
        return ss;
    } 