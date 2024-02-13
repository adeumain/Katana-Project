
#include "Game.h"
#include <iostream>

bool Game::verifVie(){
    for (Joueur& joueur : ListeJoueur) {
        if (joueur.getVie() <= 0) {
            return false;
        }
    }
    return true;
}

bool Game::verifHonneur(){
    for (Joueur& joueur : ListeJoueur) {
        if (joueur.getHoneur() <= 0) {
            return false;
        }
    }
    return true;
}

void Game::jeu() {
    while (Jeu) {
        void tour();
    }
}

void Game::selectionCarte(int i) {
    int choix = 0;
    int cible = 0;
    std::cin >> choix;
    std::cout << "Choisissez la carte à jouer: ";
    std::cout << "Vous avez choisi: " << ListeJoueur[i].getMain()[choix - 1].getName() << std::endl;
    // Entrer la variable choix dans le vector choixCarte
    ListeJoueur[i].defausse.push_back(ListeJoueur[i].getMain()[choix - 1]);
    // Supprimer la carte jouée de la main du joueur
    ListeJoueur[i].getMain().erase(ListeJoueur[i].getMain().begin() + choix - 1);
    // Saisi le numéro de la cible
    std::cout << "Choisissez la cible: ";
    std::cin >> cible;
    // Si la cible est un joueur
    }

void Game::tour() {
    int i = 0;;
    for (Joueur& joueur : ListeJoueur) {
        afficherStats(joueur);
        afficherMain(joueur);
        std::cout << "Choisissez une carte à jouer: ";
        std::cin >> i;
        selectionCarte(i-1);
    }
}

void Game::afficherStats(Joueur& joueur) {
        std::cout << "Nom: " << joueur.getName() << std::endl;
        std::cout << "Role: " << joueur.getRole() << std::endl;
        std::cout << "Personnage: " << joueur.getCharacter() << std::endl;
        std::cout << "Vie: " << joueur.getVie() << std::endl;
        std::cout << "Honneur: " << joueur.getHoneur() << std::endl;
        std::cout << "Main: " << std::endl;
    }

void Game::afficherMain(Joueur& joueur) {
    for (int j = 0; j < joueur.getMain().size(); j++) {
        std::cout << j + 1 << ". " << joueur.getMain()[j].getName() << std::endl;
    }
}





