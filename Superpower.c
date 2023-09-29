#include "Superpower.h"

SuperPower::Superpower(int id,Pos posiciones,vector<bool> posibles) {
    id_SuperPower =id;
    pos = posiciones;
    posibles_movimientos = posibles;
}



int SuperPower::cid_SuperPower() const{
    return id_SuperPower;
}

Pos SuperPower::cpos()const{
    return pos;
}

vector<bool> SuperPower::cposibles_movimientos() const{
    return posibles_movimientos;
}
    
void SuperPower::modifica_Pos(Pos new_Pos){
    pos = new_pos;
}

void SuperPower::modifica_posibles_movimientos(vector<bool> new_posibles_movimientos()){
    posibles_movimientos = new_posibles_movimientos;
}