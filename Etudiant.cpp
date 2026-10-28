
#include "Etudiant.h"

Etudiant::Etudiant(string n, string c,
                   double n1, double n2, double n3) {
    nom = n;
    cin = c;
    note1 = n1;
    note2 = n2;
    note3 = n3;
    filiere = nullptr;
}

string Etudiant::getNom() const {
    return nom;
}

string Etudiant::getCin() const {
    return cin;
}

double Etudiant::calculerMoyenne() const {
    return (note1 + note2 + note3) / 3.0;
}

Filiere* Etudiant::getFiliere() const {
    return filiere;
}

void Etudiant::setFiliere(Filiere* f) {
    filiere = f;
}
