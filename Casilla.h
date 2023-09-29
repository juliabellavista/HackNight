#ifndef CASILLA_H
#define CASILLA_H

#include "Casilla.h"

#ifndef NO_DIAGRAM	//No aparece en el diagrama
#include <iostream>
#include <vector>
using namespace std;
#endif



class Casilla {

private:

    int id_Casilla;

    bool ocupada;

    int id_Ocupant;

    bool SuperPower;
    

public:
             /*     Constructoras     */

    Casilla();

    	       /*     Modificadoras     */

    void modifica_ocupada(int id_Casilla);

    void modifica_id_Ocupant(int id_Casilla,int new_id_Ocupant);

    void modifica_SuperPower(int id_Casilla);

    	       /*     Consultoras     */

    int cid_Casilla() const;

    bool cocupada() const;

    int cid_Ocupant() const;

    bool cSuperPower() const;


private:

    
};
#endif


