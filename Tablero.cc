#include "Tablero.h"

Tablero::Tablero(int id, int n_Fichas){
    id_Tablero = id;
    num_Fichas = n_Fichas;
    vector<Casilla> c (9);
    for(int i = 0; i <9; ++i){
        Casilla a(i);
        c[i] = a;
        
    }
    tablero = c;
}

    

    void Tablero::mover_ficha(Casilla vieja, Pos nueva, int id_Ficha){
        //mirar si hay alguien en la pos nueva

        //hay alguien
        
        int id_casilla = posiciones[nueva.x][nueva.y];
        Casilla nueva1=  tablero[id_casilla];
        if(nueva1.consultar_ocupada()){
            vieja.modifica_id_Ocupant(nueva1.consultar_id_Ocupant());
            nueva1.modifica_id_Ocupant(id_Ficha);
        }else{
            //no hay nadie
            nueva1.modifica_id_Ocupant(id_Ficha);
            nueva1.modifica_ocupada();
        }
        

    }

  


    	       /*     Consultoras     */
    
    int Tablero::consultar_id(){
       return id_Tablero;
    }

    vector<bool> Tablero::calcular_moviments(int id_Ficha){
        Casilla c = consultar_casilla(id_Ficha);
        int id_casilla = c.consultar_id_Casilla();
        return adjacents[id_casilla];
    }

    vector<bool> Tablero::consultar_posFicha(int id_Ficha){

    }

    bool Tablero::tres_en_ralla(vector<Ficha> fichas_jugador){

    }

    Casilla Tablero::consultar_casilla(int id_Ficha){
        for(int i= 0; i< 9; ++i){
            if(id_Ficha == tablero[i].consultar_id_Casilla()){
                return tablero[i];
            }
        }
    }


   