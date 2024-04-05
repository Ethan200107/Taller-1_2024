#include "Reservas.h"
using namespace std;

Reservas::Reservas(string tipo_, vector<string> Lista_Asistentes, string duracion_, string nombre_, string lugar_, string otros_)
{
    string lugar = lugar_;
    string nombre = nombre_;
    string tipo = tipo_;
    string duracion = duracion_;
    string otros = otros_;
    vector<string> Lista_Asistentes_ = Lista_Asistentes;
};
vector<string > Reservas::getListaAsistentes() {
    return Lista_Asistentes;
}

void Reservas::setListaAsistentes(const vector<Asistentes>& lista) {
    Lista_Asistentes = lista;
}
string Reservas::getNombre() {
    return nombre;
};
void Reservas::setNombre(string nom) {
    nombre = nom;
};
string Reservas::getLugar() {
    return lugar;
};
void Reservas::setLugar(string lug) {
    lugar = lug;
};
string Reservas::getDur() {
    return duracion;
};
void Reservas::setDur(string Dura) {
    duracion = Dura;
};
string Reservas::getTipo() {
    return tipo;
};
void Reservas::setTipo(string tip) {
    tipo = tip;
};
string Reservas::getOtros() {
    return otros;
};
void Reservas::setOtro(string otro) {
    otros = otro;
};
string Reservas::mostrarInformacion()
{
    string ss = "Nombre: " + nombre + " ,Lugar: " + lugar + " ,Duracion: " + duracion + " ,tipo: " + tipo + ", y tambien tiene: " + otros;
    return ss;
};