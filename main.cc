#include<iostream>
#include<vector>

using namespace std;

void main(){

    string arg;

    while(cin >> arg){
        if(arg =="empezar_partida"){

            //crear tablero

        }else if(arg =="selecionar_ficha"){ //id_ficha selecionada
            //comprobar que id_ficha existe
            //calcular posibles posiciones
            //imprimir posibles posiciones


        }else if(arg =="mover_ficha"){//id_ficha a mover,//pos a dnd mover
            //quitar la ficha de dnd esta
            //poner ficha nueva posicion
            //quitar ficha antigua posicion
            //colocar ficha_antigua nueva posicion

        }else if(arg =="deselecionar_ficha"){//id_ficha
            //quitar ficha selecionada
            //quitar posibles posiciones


        }else if(arg =="acabar_partida"){
            //eliminar tablero
        }
    }

}