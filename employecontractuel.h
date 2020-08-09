#ifndef __EMPLOYECONTRACTUEL_H__
#define __EMPLOYECONTRACTUEL_H__

#include <iostream>
#include "employe.h"

class EmployeContractuel : public Employe {
  protected:
    double montant_contrat;
    double semaines;

  public:
    //Constructeur
    EmployeContractuel(std::string nom, int matricule, double le_montant_contrat, double les_semaines);

    //Destructeur
    ~EmployeContractuel() {
        std::cout <<"Employe Contractuel detruit"<<std::endl; 
    }

    //Afficher Employe Contractuel
    void afficherEmploye();

    //Afficher paie
    void afficherPaie();

};

#endif // __EMPLOYECONTRACTUEL_H__