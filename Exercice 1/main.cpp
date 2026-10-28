
#include <iostream>
#include "Etudiant.h"

using namespace std;

int main() {
    // Etudiant avec constructeur par defaut
    Etudiant e1;

    e1.setNom("Alice Dupont");
    e1.setCin("123456789012345");
    e1.setNote1(15.5);
    e1.setNote2(12.0);
    e1.setNote3(18.5);

    cout << "Etudiant 1 : " << e1.getNom() << endl;
    cout << "CIN : " << e1.getCin() << endl;
    cout << "Moyenne : " << e1.calculerMoyenne() << endl;

    // Test d'une note invalide
    cout << "\nTest de validation :" << endl;
    e1.setNote1(25);

    cout << "Note1 : " << e1.getNote1() << endl;

    // Etudiant avec constructeur parametre
    Etudiant e2("Bob Martin", "987654321098765",
                10, 14, 16);

    cout << "\nEtudiant 2 : " << e2.getNom() << endl;
    cout << "Moyenne : " << e2.calculerMoyenne() << endl;

    return 0;
}
