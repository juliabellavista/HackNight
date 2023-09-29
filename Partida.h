#ifndef PARTIDA_H
#define PARTIDA_H

#include "Partida.h"

#ifndef NO_DIAGRAM	//No aparece en el diagrama
#include <iostream>
#include <vector>
using namespace std;
#endif



class Partida {

private:

    int id_Partida;

    int id_Taulell;

    int nombre_jugadors;

    string mode_joc;
    
    string estat_partida;

    int torn;

    int ficha_seleccionada;
    

public:
             /*     Constructoras     */

    Partida();

    	       /*     Modificadoras     */

    void modifica_nombre_jugadors(int new_nombre_jugadors);

    void modifica_id_Taulell(int new_id_Taulell);

    void modifica_mode_joc(string new_mode_joc);

    void modifica_estat_partida(string new_estat_partida);

    void modifica_torn(int id_Partida);

    void modifica_ficha_seleccionada(int new_ficha_seleccionada);

    void mover_ficha(int id_Taulell, int id_Ficha, int new_pos);

    void seleccionar_ficha(int id_Taulell, int id_Ficha);

    void deseleccionar_ficha(int id_Taulell, int id_Ficha);


    	       /*     Consultoras     */

    int cid_Partida() const;

    int cid_Taulell() const;

    int cnombre_jugadors() const;

    string cmode_joc() const;

    string cestat_partida() const;

    int ctorn() const;

    int cficha_seleccionada() const;

    bool existeix_ficha(int id_Ficha) const;
private:

    
};
#endif


