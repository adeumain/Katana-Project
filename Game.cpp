
#include "Game.h"
#include"Joueur.h"
#include <iostream>
#include <string>
#include <cmath>


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
    defausse.push_back(ListeJoueur[i].getMain()[choix - 1]);
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


void Game::afficherAttaque(Joueur& joueur, int cible, int degats) {

    std::cout << "Attaque effectuée par le joueur" << joueur.getName() << "sur le joueur" << ListeJoueur[cible].getName() << std::endl;
}

int Game::difficulte(Joueur& joueur, int cible, int porte) {
    int indice_joueur = joueur.trouverIndice(ListeJoueur, joueur);
    int max = ListeJoueur.size();
    int difficulte = std::abs(indice_joueur - cible);

    if (difficulte > max) {
        difficulte = difficulte - max;
        return difficulte;
    }
    else {
        return difficulte;
    }
}
void Game::subirDegats(int cible, int degats, int hp) {
    ListeJoueur[cible].setVie(degats);
    int hp_restant = ListeJoueur[cible].getVie();
    std::cout << "Joueur :" << ListeJoueur[cible].getName() << "à subit " << degats << "il lui reste donc :" << hp_restant << std::endl;

}

int Game::verifParade(int cible, int degats, int hp, int demande) {
    if (demande == true) {
        if("condition pour verifier qu'il a bien une carte parade"){
        // code
            return 0;
        }
        else {
            subirDegats(cible, degats, hp);
            return 1;
        }  
    }
    else
    {
        subirDegats(cible, degats, hp);
        return 1;
    }
}

void Game::attaque(Joueur& joueur, int cible, int degats, int hp, int porte) {
    int demande;
    afficherAttaque(joueur, cible, degats);
    int difficulter = difficulte(joueur, cible, porte);
    std::cout << "Avez vous une carte parade ?" << std::endl << "- '0' pour oui " << std::endl << "- '1' pour non " << std::endl;
    std::cin >> demande;
    if (demande == 1) {
        subirDegats(cible, degats, hp);
    }
    else {
        verifParade( cible, degats, hp, demande);
    }
}