#include "Partida.h"

Partida::Partida(int id) {
    id_Partida = id;
    //de moment farem que només hi hagi un taulell
    id_Taulell = 1;
    nombre_jugadors = 2;
    mode_joc = "normal";
    estat_partida = "iniciada";
    torn = 0;
    ficha_seleccionada = -1;
    moviments = {};
    //t = Tablero(id_Taulell, 6);
}

void Partida::modifica_nombre_jugadors(int new_nombre_jugadors) {
    nombre_jugadors = new_nombre_jugadors;
}

void Partida::modifica_id_Taulell(int new_id_Taulell) {
    id_Taulell = new_id_Taulell;
}

void Partida::modifica_mode_joc(string new_mode_joc) {
    mode_joc = new_mode_joc;
}

void Partida::modifica_estat_partida(string new_estat_partida) {
    estat_partida = new_estat_partida;
}

void Partida::modifica_torn() {
    if (torn == 0) torn = 1;
    else torn = 0;
}

void Partida::modifica_ficha_seleccionada(int new_ficha_seleccionada) {
    ficha_seleccionada = new_ficha_seleccionada;
}

void Partida::mover_ficha(int id_Ficha, int new_pos) {
    int old_pos = t.consultar_casilla(id_Ficha);
    if(moviments[new_pos]){
        t.mover_ficha(old_pos, new_pos, id_Ficha);
        modifica_torn();
    }
   
}

int Partida::cjugador(int casella) const{
    return t.cjugador(casella);

}

void Partida::seleccionar_ficha(int id_Ficha){
    ficha_seleccionada = id_Ficha;
    moviments = t.calcular_moviments(id_Ficha);
}

void Partida::deseleccionar_ficha(){
    ficha_seleccionada = -1;
    moviments = {};
}

int Partida::cid_Partida() const {
    return id_Partida;
}

int Partida::cid_Taulell() const {
    return id_Taulell;
}

int Partida::cnombre_jugadors() const {
    return nombre_jugadors;
}

string Partida::cmode_joc() const {
    return mode_joc;
}

string Partida::cestat_partida() const {
    return estat_partida;
}

int Partida::ctorn() const {
    return torn;
}

int Partida::cficha_seleccionada() const {
    return ficha_seleccionada;
}