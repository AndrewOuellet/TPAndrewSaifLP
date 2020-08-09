#ifndef __EMPLOYE_H__
#define __EMPLOYE_H__

#include <iostream>
#include <string>


class Employe {
  protected:
    std::string nom;
    int matricule;

  public:
    //Constructeur par défaut
    Employe(std::string le_nom, int le_matricule);

    //Destructeur virtuel qui ne fait rien mais nécessaire pour que l'effacement se fasse comme il faut.
    virtual ~Employe(){}
    
    //Methode abstraite qui devrait etre remplacer dans les classes filles

    //Afficher 
    virtual void afficherEmploye() = 0;

    //Afficher paie
    virtual void afficherPaie() = 0;

};

#endif // __EMPLOYE_H__