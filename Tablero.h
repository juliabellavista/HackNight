#ifndef TABLERO_H
#define TABLERO_H

#ifndef NO_DIAGRAM	//No aparece en el diagrama
#include "Casilla.h"
#include "Ficha.h"
#include <vector>
#include <iostream> 
using namespace std;
#endif

class Tablero {

private:
    int id_Tablero;
    vector<Casilla> tablero;
    int num_Fichas;
    struct Pos{
        int x;
        int y;
    };
    vector<vector<bool>> adjacents = {{false,true,false,true,true,false,false,false,false},
                                        {true,false,true,true,true,true,false,false,false},
                                        {false,true,false,false,true,true,false,false,false},
                                        {true,true,false,false,true,false,true,true,false},
                                        {true,true,true,true,false,true,true,true,true},
                                        {false,true,true,false,true,false,false,true,true},
                                        {false,false,false,true,true,false,false,true,false},
                                        {false,false,false,true,true,true,true,false,true},
                                        {false,false,false,false,true,true,false,true,false},
                                        };
    vector<vector<int>> posiciones = {{0,1,2},{3,4,5},{6,7,8}};
public:
             /*     Constructoras     */

    Tablero(int id, int n_Fichas);

    	       /*     Modificadoras     */

    void mover_ficha(Casilla vieja, Pos nueva, int id_Ficha);


    	       /*     Consultoras     */
    
    int consultar_id();

    vector<bool> calcular_moviments(int id_Ficha);

    vector<bool> consultar_posFicha(int id_Ficha);

    Casilla consultar_casilla(int id_Ficha);

    bool tres_en_ralla(vector<Ficha> fichas_jugador);






private:
    
    
};
#endif


