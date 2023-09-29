#ifndef CASELLA_H
#define CASELLA_H

#include "Casella.h"

#ifndef NO_DIAGRAM	//No aparece en el diagrama
#include <iostream>
#include <vector>
using namespace std;
#endif



class Casella {

private:

    int id_Casella;

    bool ocupada;

    int id_Ocupant;

    bool SuperPower;
    

public:
             /*     Constructoras     */

    Casella();

    	       /*     Modificadoras     */

    void modifica_ocupada(int id_Casella);

    void modifica_id_Ocupant(int id_Casella,int new_id_Ocupant);

    void modifica_SuperPower(int id_Casella);

    	       /*     Consultoras     */

    int id_Casella() const;

    bool ocupada() const;

    int id_Ocupant() const;

    bool SuperPower() const;


private:

    
};
#endif


