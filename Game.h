#ifndef PROJET_COURS_GAME_H
#define PROJET_COURS_GAME_H

#include <vector>
#include <string>
#include "Joueur.h"
#include "FunctCartes.h"


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
    void afficherAttaque(Joueur& joueur, int cible, int degats);
    void subirDegats(int cible, int degats, int hp);
    int difficulte(Joueur& joueur, int cible, int porte);
    int verifParade(int cible, int degats, int hp, int demande);
    void attaque(Joueur& joueur, int cible, int degats, int hp, int porte);
};




#endif // PROJET_COURS_GAME_H
