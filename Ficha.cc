#include "Ficha.h"

Ficha::Ficha(int id, int equipo){
    id_Ficha = id;
    id_Equipo = equipo;
    casilla = -1;
    colocada = false;
    seleccionada = false;
}

void Ficha::modifica_id_Equipo(int new_id_Equipo){
    id_Equipo = new_id_Equipo;
}

void Ficha::modifica_Pos(int new_casilla){
    casilla = new_casilla;
}

void Ficha::modifica_colocada(bool new_colocada){
    colocada = new_colocada;
}

void Ficha::modifica_selecionada(bool new_selecionada){
    seleccionada = new_selecionada;
}

int Ficha::cid_Ficha() const{
    return id_Ficha;
}

int Ficha::cid_Equipo() const{
    return id_Equipo;
}

int Ficha::casillaFicha() const{
    return casilla;
}

bool Ficha::ccolocada() const{
    return colocada;
}

bool Ficha::cselecionada() const{
    return seleccionada;
}