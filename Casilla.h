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

    Casilla(int id);

    	       /*     Modificadoras     */

    void modifica_ocupada();

    void modifica_id_Ocupant(int new_id_Ocupant);

    void modifica_SuperPower();

    	       /*     Consultoras     */

<<<<<<< HEAD
    int consultar_id_Casilla() const;

    bool consultar_ocupada() const;

    int consultar_id_Ocupant() const;

    bool consultar_SuperPower() const;
  
=======
    int cid_Casilla() const;

    bool cocupada() const;

    int cid_Ocupant() const;

    bool cSuperPower() const;


private:

    
>>>>>>> 25f4d9bf5ccfbfc2fa1f24877ba9ca668b597dd8
};
#endif


