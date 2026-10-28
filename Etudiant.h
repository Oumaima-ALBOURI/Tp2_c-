
#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <string>
using namespace std;

class Filiere;

class Etudiant {
private:
    string nom;
    string cin;
    double note1, note2, note3;
    Filiere* filiere;

public:
    Etudiant(string n, string c,
             double n1, double n2, double n3);

    string getNom() const;
    string getCin() const;
    double calculerMoyenne() const;

    Filiere* getFiliere() const;
    void setFiliere(Filiere* f);
};

#endif
