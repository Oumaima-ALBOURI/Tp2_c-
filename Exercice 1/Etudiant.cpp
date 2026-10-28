
#include "Etudiant.h"
#include <iostream>

using namespace std;

// Constructeur par defaut
Etudiant::Etudiant()
    : nom("Inconnu"), cin("000000000000000"),
      note1(0), note2(0), note3(0) {
}

// Constructeur parametre
Etudiant::Etudiant(string n, string c,
                   double n1, double n2, double n3)
    : nom(n), cin(c), note1(0), note2(0), note3(0) {

    setNote1(n1);
    setNote2(n2);
    setNote3(n3);
}

// Getters
string Etudiant::getNom() const {
    return nom;
}

string Etudiant::getCin() const {
    return cin;
}

double Etudiant::getNote1() const {
    return note1;
}

double Etudiant::getNote2() const {
    return note2;
}

double Etudiant::getNote3() const {
    return note3;
}

// Setters
void Etudiant::setNom(string n) {
    nom = n;
}

void Etudiant::setCin(string c) {
    cin = c;
}

void Etudiant::setNote1(double n) {
    if (n >= 0 && n <= 20)
        note1 = n;
    else
        cerr << "Note1 invalide : " << n << endl;
}

void Etudiant::setNote2(double n) {
    if (n >= 0 && n <= 20)
        note2 = n;
    else
        cerr << "Note2 invalide : " << n << endl;
}

void Etudiant::setNote3(double n) {
    if (n >= 0 && n <= 20)
        note3 = n;
    else
        cerr << "Note3 invalide : " << n << endl;
}

// Calcul de la moyenne
double Etudiant::calculerMoyenne() const {
    return (note1 + note2 + note3) / 3.0;
}
