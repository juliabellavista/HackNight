#include<iostream>
#include<vector>
#include "Partida.h"

using namespace std;

void imprimir(){
    for(int i= 0; i < 9;++i){
        cout << " x ";
        if(i % 3 != 0){
            cout << "|";
        }else{
            cout << endl;
            if(i != 9){
               cout << "----------" << endl;
            }
        
        }
        
    }

}
void main(){

    string arg;
    Partida joc = Partida(1);
    imprimir();
    while(cin >> arg){

        if(arg =="selecionar_ficha"){ //id_ficha selecionada
            int id_ficha;
            cin >> id_ficha;
            //comprobar que id_ficha existe
                //calcular posibles posiciones
                joc.seleccionar_ficha(id_ficha);
                //imprimir posibles posiciones

            


        }else if(arg =="mover_ficha"){//id_ficha a mover,//pos a dnd mover

            int id_ficha;
            cin >> id_ficha;
            //comprobar que id_ficha existe

                int taulell = joc.cid_Taulell();
                int id_ficha;
                int pos_mover;
                cin >> pos_mover;
                joc.mover_ficha(id_ficha,pos_mover);
                //quitar la ficha de dnd esta
                //poner ficha nueva posicion
                //quitar ficha antigua posicion
                //colocar ficha_antigua nueva posicion
           
            

        }else if(arg =="deselecionar_ficha"){//id_ficha
            //quitar ficha selecionada
            //quitar posibles posiciones

            int id_ficha;
            cin >> id_ficha;
            //comprobar que id_ficha existe

                int taulell = joc.cid_Taulell();
                joc.deseleccionar_ficha();
                //quitar la ficha de dnd esta
                //poner ficha nueva posicion
                //quitar ficha antigua posicion
                //colocar ficha_antigua nueva posicion
           
        }else if(arg =="acabar_partida"){
            //eliminar tablero
        }
        cout << "---------" << endl;
    }

}