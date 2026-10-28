
#ifndef FILIERE_H
#define FILIERE_H

#include <string>
using namespace std;

class Etudiant;

class Filiere {
private:
    string nomFiliere;
    Etudiant* etudiantInscrit;

public:
    Filiere(string nom);

    void inscrireEtudiant(Etudiant* e);
    Etudiant* getEtudiantInscrit() const;
    void afficherInfo() const;
};

#endif
