#include "Superpower.h"

Superpower::Superpower(int id,Pos posiciones,vector<bool> posibles) {
    id_Superpower =id;
    pos = posiciones;
    posibles_movimientos = posibles;
}



int Superpower::cid_Superpower() const{
    return id_Superpower;
}

Pos Superpower::cpos()const{
    return pos;
}

vector<bool> Superpower::cposibles_movimientos() const{
    return posibles_movimientos;
}
    
void Superpower::modifica_Pos(Pos new_Pos){
    pos = new_pos;
}

void Superpower::modifica_posibles_movimientos(vector<bool> new_posibles_movimientos()){
    posibles_movimientos = new_posibles_movimientos;
}