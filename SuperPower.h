#ifndef SUPER_POWER_H
#define SUPER_POWER_H

#include "SuperPower.h"

#ifndef NO_DIAGRAM	//No aparece en el diagrama
#include <iostream>
#include <vector>
using namespace std;
#endif



class SuperPower {

private:

    int id_SuperPower;

    struct Pos{
        int x;
        int y;
    };

    vector<bool> posibles_movimientos();
    

public:
             /*     Constructoras     */

    SuperPower();

    	       /*     Modificadoras     */

    void modifica_Pos(int id_SuperPower,Pos new_Pos);

    void modifica_posibles_movimientos(int id_SuperPower, vector<bool> new_posibles_movimientos());

    	       /*     Consultoras     */

    int cid_SuperPower() const;

    Pos cpos() const;

    vector<bool> cposibles_movimientos() const;


private:

    
};
#endif


