#include <iostream>
#include <string>

#include "employe.h"
#include "employesyndique.h"
#include "employecontractuel.h"
#include "employeponctuel.h"



int main() {
  int choix=0;
  int matricule;
  double shoraire;
  double nmbheure;
  int contrat;
  int duree;
  int montant;
  std::string nom;

  // Tableau de pointeurs vers des Employe.
  Employe* listeEmployes[250];

  // Compteur du nombre d'employes présentement dans le tableau.
  int nb_employe =0;
  // creation des employes
  do { 
    std::cout<< "Choisir parmi ces choix de taches:\n";
    std::cout<< "1. Ajouter un employe syndique\n";
    std::cout<< "2. Ajouter un employe pontuel\n";
    std::cout<< "3. Ajouter un un employe contractuel\n";
    std::cout<< "0. Afficher la liste des employes et quitter\n";    
    std::cin>>choix;
    std::cout<<std::endl;


    switch (choix) {
      case 1:
        std::cout<<"*** Ajout d'un employe syndique ***\n";
        std::cout<<"Saisir le nom de l'employe : ";
        std::cin >> nom;
        std::cout<<"Saisir le numero de matricule de l'employe : ";
        std::cin >> matricule;
        if (matricule<10000||matricule>99999){
          std::cout<<"Saisir un numero de matricule valide : ";
          std::cin>>matricule;
        }
        std::cout<<"Saisir le salaire horaire de l'employe : ";
        std::cin >> shoraire;
        std::cout<<"Saisir le nombre d'heure travailler de l'employe : ";
        std::cin >> nmbheure;
        listeEmployes[nb_employe] = new EmployeSyndique(nom,matricule,shoraire,nmbheure);
        nb_employe++;
      break;
      
      case 2:
        std::cout<<"*** Ajout d'un employe pontuel ***\n";
        std::cout<<"Saisir le nom de l'employe : ";
        std::cin>>nom;
        std::cout<<"Saisir le numero de matricule de l'employe : ";
        std::cin>>matricule;

        if (matricule<10000||matricule>99999){
        std::cout<<"Saisir un numero de matricule valide : ";
        std::cin>>matricule;
        }
        std::cout<<"Saisir le montant payer pour travail fait ";
        std::cin>>montant;
        listeEmployes[nb_employe] = new EmployePonctuel(nom,matricule,montant);
        nb_employe++;
        break;
    
      case 3:
        std::cout<<"*** Ajout d'un employe contractuel ***\n";
        std::cout<<"Saisir le nom de l'employe : ";
        std::cin>>nom;
        std::cout<<"Saisir le numero de matricule de l'employe : ";
        std::cin>>matricule;

        if (matricule<10000||matricule>99999){
          std::cout<<"Saisir un numero de matricule valide : ";
          std::cin>>matricule;
        }
        std::cout<<"Saisir le montant payer pour le contrat : ";
        std::cin>>contrat;
        std::cout<<"Saisir la duree du contrat en nombre de semaine : ";
        std::cin>>duree;
        listeEmployes[nb_employe] = new EmployeContractuel(nom,matricule,contrat,duree);
        nb_employe++;
        break;
          
      case 0:
        break;
            
      default:{
        std::cout<<"MAUVAIS CHOIX!!!\n";
        std::cout<<std::endl;
        }
          break;
        }
} while (choix!=0);


// Afficher toutes les employes
  for (int i=0 ; i<nb_employe ; i++) {
    //affichage employer et matricute
    listeEmployes[i]->afficherEmploye();
    //affichage polymorphique de la paie
    listeEmployes[i]->afficherPaie();

  }


  // Effacer toutes les employes créées dynamiquement
  for (int i=0 ; i<nb_employe ; i++) {
    delete listeEmployes[i];
  }
}