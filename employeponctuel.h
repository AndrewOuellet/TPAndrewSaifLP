#ifndef __EMPLOYEPONCTUEL_H__
#define __EMPLOYEPONCTUEL_H__

#include <iostream>
#include "employe.h"

class EmployePonctuel : public Employe {

  protected:
    double salaire_unique;

  public:
    //Constructeur
    EmployePonctuel(std::string nom, int matricule, double salaire);

    //Destructeur
    ~EmployePonctuel() {std::cout << "Employe Ponctuel detruit" <<std::endl;} 

    //Afficher Employe Ponctuel
    void afficherEmploye();

    ////Afficher paie
    void afficherPaie();
};

#endif // __EMPLOYEPONCTUEL_H__