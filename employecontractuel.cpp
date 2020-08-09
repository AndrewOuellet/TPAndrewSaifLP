#include "employecontractuel.h"

EmployeContractuel::EmployeContractuel(std::string nom, int matricule, double le_montant_contrat, double les_semaines) :Employe(nom, matricule) {
	this->montant_contrat = le_montant_contrat;
	this->semaines = les_semaines;
}

void EmployeContractuel::afficherPaie() {
	double salaire_brut = 0;
	double salaire_net = 0;
	double tTvq = 0;
	double tTps = 0;

	salaire_brut = (this->montant_contrat/this->semaines);
	tTvq = salaire_brut * 0.15;
	tTps = salaire_brut * 0.15;
	salaire_net = salaire_brut - (tTvq + tTps);

	//affichage
	std::cout << " Paie brute de " << salaire_brut << "$" << std::endl;
    std::cout << " Impots CA de " << tTps << "$" << std::endl;
    std::cout << " Impots QC de " << tTvq << "$" << std::endl;
    std::cout << " Paie nette de " << salaire_net << "$" << std::endl;
}

void EmployeContractuel::afficherEmploye(){
//remplissage des variable  
this ->nom = nom;
this ->matricule = matricule;
//affichage des variables
std::cout <<  nom << " " << matricule << std::endl;
}
