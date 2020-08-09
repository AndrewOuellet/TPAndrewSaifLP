#include "employesyndique.h"

EmployeSyndique::EmployeSyndique(std::string nom, int matricule, double salaire_horaire, double heures) :Employe(nom, matricule) {
  this->salaire_horaire = salaire_horaire;
  this->heures = heures;
  }

void EmployeSyndique::afficherPaie() {

	double salaire_brut = (this->salaire_horaire*this->heures);
	double salaire_net = 0;
	double tTvq = 0;
	double tTps = 0;

	salaire_brut = this->salaire_horaire * this->heures;
	tTvq = salaire_brut * 0.15;
	tTps = salaire_brut * 0.15;
	salaire_net = salaire_brut - (tTvq + tTps);

	//affichage
std::cout << " Paie brute de " << salaire_brut << "$" << std::endl;
    std::cout << " Impots CA de " << tTps << "$" << std::endl;
    std::cout << " Impots QC de " << tTvq << "$" << std::endl;
    std::cout << " Paie nette de " << salaire_net << "$" << std::endl;
}

void EmployeSyndique::afficherEmploye(){
//remplissage des variable  
this ->nom = nom;
this ->matricule = matricule;
//affichage des variables
std::cout <<  nom << " " << matricule << std::endl;
}


