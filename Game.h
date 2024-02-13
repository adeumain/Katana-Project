#ifndef PROJET_COURS_GAME_H
#define PROJET_COURS_GAME_H

#include <vector>
#include <string>
#include "Joueur.h"


class Game{
private:
    bool Jeu = true;
public:
    bool verifVie();
    bool verifHonneur();
    void jeu();
    void tour();
    void selectionCarte(int i);
    void afficherStats(Joueur& joueur);
    void afficherMain(Joueur& joueur);
};




#endif // PROJET_COURS_GAME_H
