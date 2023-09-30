#include "Casilla.h"

Casilla::Casilla(int id) {
    id_Casilla = id;
    ocupada = false;
    id_Ocupant = -1;
    //SuperPower = false;
}

void Casilla::modifica_ocupada() {
    ocupada = not ocupada;
}

void Casilla::modifica_id_Ocupant(int new_id_Ocupant) {
    id_Ocupant = new_id_Ocupant;
}

/*void Casilla::modifica_SuperPower() {
    SuperPower = not SuperPower;
}*/

int Casilla::consultar_id_Casilla() const {
    return id_Casilla;
}

bool Casilla::consultar_ocupada() const {
    return ocupada;
}

int Casilla::consultar_id_Ocupant() const {
    return id_Ocupant;
}
/*
bool Casilla::consultar_SuperPower() const {
    return SuperPower;
}*/