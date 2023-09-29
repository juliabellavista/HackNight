#include<iostream>
#include<vector>
#include "Partida.h"

using namespace std;

void main(){

    string arg;
    Partida joc;

    while(cin >> arg){

        if(arg =="selecionar_ficha"){ //id_ficha selecionada
            int id_ficha;
            cin >> id_ficha;
            //comprobar que id_ficha existe
            if(joc.existeix_ficha(id_ficha)){
                //calcular posibles posiciones
                int taulell = joc.cid_Taulell();
                joc.seleccionar_ficha(taulell,id_ficha);
                //imprimir posibles posiciones
            }else{
                cout << "la ficha no existe" << endl;
            }
            


        }else if(arg =="mover_ficha"){//id_ficha a mover,//pos a dnd mover

            int id_ficha;
            cin >> id_ficha;
            //comprobar que id_ficha existe
            if(joc.existeix_ficha(id_ficha)){
                int taulell = joc.cid_Taulell();
                int id_ficha;
                int pos_mover;
                cin >> pos_mover;
                joc.mover_ficha(taulell,id_ficha,pos_mover);
                //quitar la ficha de dnd esta
                //poner ficha nueva posicion
                //quitar ficha antigua posicion
                //colocar ficha_antigua nueva posicion
            }else{
                cout << "la ficha no existe" << endl;
            }
            

        }else if(arg =="deselecionar_ficha"){//id_ficha
            //quitar ficha selecionada
            //quitar posibles posiciones

            int id_ficha;
            cin >> id_ficha;
            //comprobar que id_ficha existe
            if(joc.existeix_ficha(id_ficha)){
                int taulell = joc.cid_Taulell();
                joc.deseleccionar_ficha(taulell,id_ficha);
                //quitar la ficha de dnd esta
                //poner ficha nueva posicion
                //quitar ficha antigua posicion
                //colocar ficha_antigua nueva posicion
            }else{
                cout << "la ficha no existe" << endl;
            }
        }else if(arg =="acabar_partida"){
            //eliminar tablero
        }
    }

}