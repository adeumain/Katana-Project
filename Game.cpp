
#include "Game.h"
#include <iostream>


Difficulte::Difficulte(const std::vector<std::string>& t, int j, int e) : table(t), joueur(j), ennemis(e) {
    max = table.size() / 2;
    compteur_1 = 0;
    compteur_2 = 0;
}

void Difficulte::calculateCounters() {
    for (int i = joueur; i > ennemis; --i) {
        if (compteur_1 <= max) {
            compteur_1 += 1;
        } else {
            compteur_1 = 0;
        }
    }

    for (int i = joueur; i > ennemis; --i) {
        if (compteur_2 <= max) {
            compteur_2 += 1;
        } else {
            compteur_2 = 0;
        }
    }
}

void Difficulte::printResult() {
    if (compteur_1 != 0) {
        std::cout << compteur_1 << std::endl;
    } else {
        std::cout << compteur_2 << std::endl;
    }
}

void Tour::jeu() {
    while (Jeu) {
        void tour();
    }
}



void Tour::selectionCarte(int i) {
    int choix = 0;
    int cible = 0;
    std::cout << "Choisissez la carte à jouer: ";
    std::cout << "Vous avez choisi: " << ListeJoueur[0].main[choix - 1].name << std::endl;
    // Entrer la variable choix dans le vector choixCarte
    ListeJoueur[i].defausse.push_back(ListeJoueur[i].main[choix - 1]);
    // Supprimer la carte jouée de la main du joueur
    ListeJoueur[i].main.erase(ListeJoueur[i].main.begin() + choix - 1);
    // Saisi le numéro de la cible
    std::cout << "Choisissez la cible: ";
    std::cin >> cible;
    // Si la cible est un joueur
    }


