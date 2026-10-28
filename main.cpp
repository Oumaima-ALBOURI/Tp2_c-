
#include <iostream>
#include "Etudiant.h"
#include "Filiere.h"

using namespace std;

int main() {
    Etudiant e1("Alice Dupont", "AB12345",
                15, 14, 17);

    Filiere f1("Informatique");

    f1.inscrireEtudiant(&e1);

    f1.afficherInfo();

    if (e1.getFiliere() != nullptr) {
        cout << "\nRelation reciproque correcte." << endl;
    }

    return 0;
}
