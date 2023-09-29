#ifndef FICHA_H
#define FICHA_H

#include "Ficha.h"

#ifndef NO_DIAGRAM	//No aparece en el diagrama
#include <map>
#endif



class Ficha {

private:

    
    int id_Ficha;
    int id_Equipo;
    int casilla; 
    bool colocada;
    bool seleccionada;
    

public:
             /*     Constructoras     */

    Ficha(int id, int equipo);

    	       /*     Modificadoras     */

    void modifica_id_Equipo(int new_id_Equipo);

    void modifica_Pos(int new_casilla);

    void modifica_colocada(bool new_colocada);

    void modifica_selecionada(bool new_selecionada);

    	       /*     Consultoras     */

    int cid_Ficha() const;

    int cid_Equipo() const;

    int casillaFicha() const;

    bool ccolocada() const;

    bool cselecionada() const;


private:

    
};
#endif


