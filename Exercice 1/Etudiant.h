
#ifndef ETUDIANT_H
#define ETUDIANT_H

#include <string>

class Etudiant {
private:
    std::string nom;
    std::string cin;
    double note1, note2, note3;

public:
    // Constructeurs
    Etudiant();
    Etudiant(std::string n, std::string c,
             double n1, double n2, double n3);

    // Getters
    std::string getNom() const;
    std::string getCin() const;
    double getNote1() const;
    double getNote2() const;
    double getNote3() const;

    // Setters
    void setNom(std::string n);
    void setCin(std::string c);
    void setNote1(double n);
    void setNote2(double n);
    void setNote3(double n);

    // Calcul de la moyenne
    double calculerMoyenne() const;
};

#endif
