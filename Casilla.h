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

   // bool SuperPower;
    

public:
             /*   g  Constructoras     */

    Casilla(int id);

    	       /*     Modificadoras     */

    void modifica_ocupada();

    void modifica_id_Ocupant(int new_id_Ocupant);

    //void modifica_SuperPower();

    	       /*     Consultoras     */

    int consultar_id_Casilla() const;

    bool consultar_ocupada() const;

    int consultar_id_Ocupant() const;

    //bool consultar_SuperPower() const;
  
};
#endif


