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
    struct Pos{
        int x;
        int y;
    };
    bool colocada;
    bool selecionada;
    

public:
             /*     Constructoras     */

    Ficha();

    	       /*     Modificadoras     */

    void modifica_id_Equipo(int id_Ficha,int new_id_Equipo);

    void modifica_Pos(int id_Ficha,Pos new_Pos);

    void modifica_colocada(int id_Ficha,bool new_colocada);

    void modifica_selecionada(int id_Ficha,bool new_selecionada);

    	       /*     Consultoras     */

    int id_Ficha() const;

    int id_Equipo() const;

    Pos pos() const;

    bool colocada() const;

    bool selecionada() const;


private:

    
};
#endif


