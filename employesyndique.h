#ifndef __EMPLOYESYNDIQUE_H__
#define __EMPLOYESYNDIQUE_H__

#include <iostream>
#include "employe.h"

class EmployeSyndique : public Employe {
  protected:
    double salaire_horaire;
    double heures;

  public:
    //Constructeur
    EmployeSyndique(std::string nom, int matricule, double salaire_horaire, double heures);

    //Destructeur
    ~EmployeSyndique() {std::cout <<"Employe Syndique detruit"<<std::endl;}

    //Afficher Employe Syndique
    void afficherEmploye();

    //Afficher paie
    void afficherPaie();
};

#endif // __EMPLOYECSYNDIQUE_H__