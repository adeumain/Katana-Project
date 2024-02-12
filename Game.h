#ifndef PROJET_COURS_GAME_H
#define PROJET_COURS_GAME_H

#include <vector>
#include <string>
#include "Joueur.h"

class Difficulte {
private:
    std::vector<std::string> table;
    int joueur;
    int ennemis;
    int max;
    int compteur_1;
    int compteur_2;

public:
    Difficulte(const std::vector<std::string>& t, int j, int e);
    void calculateCounters();
    void printResult();
};

class Tour{
public:
    bool Jeu = true;
    void jeu();
    void tour();
    void selectionCarte(int i);
};



#endif // PROJET_COURS_GAME_H
