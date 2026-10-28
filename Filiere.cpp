
#include "Filiere.h"
#include "Etudiant.h"
#include <iostream>

Filiere::Filiere(string nom) {
    nomFiliere = nom;
    etudiantInscrit = nullptr;
}

void Filiere::inscrireEtudiant(Etudiant* e) {
    if (etudiantInscrit != nullptr) {
        cout << "Filiere deja occupee." << endl;
        return;
    }

    if (e == nullptr) {
        cout << "Etudiant invalide." << endl;
        return;
    }

    if (e->getFiliere() != nullptr) {
        cout << "Etudiant deja inscrit." << endl;
        return;
    }

    etudiantInscrit = e;
    e->setFiliere(this);

    cout << "Inscription reussie !" << endl;
}

Etudiant* Filiere::getEtudiantInscrit() const {
    return etudiantInscrit;
}

void Filiere::afficherInfo() const {
    cout << "\nFiliere : " << nomFiliere << endl;

    if (etudiantInscrit != nullptr) {
        cout << "Nom : "
             << etudiantInscrit->getNom() << endl;

        cout << "CIN : "
             << etudiantInscrit->getCin() << endl;

        cout << "Moyenne : "
             << etudiantInscrit->calculerMoyenne() << endl;
    } else {
        cout << "Aucun etudiant inscrit." << endl;
    }
}
