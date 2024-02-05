#include <iostream>
#include "Joueur.h"

int main() {
    cartes();
    srand(static_cast<unsigned>(time(nullptr)));

    int numPlayers;
    std::cout << "Nb Players (3-7): ";
    std::cin >> numPlayers;

    if (numPlayers < 3 || numPlayers > 7) {
        std::cerr << "Nombre invalid. Exiting." << std::endl;
        return 1;
    }

    Joueur test;
    test.mainjoueurs(numPlayers);

    for (const Joueur& main : Main) {
        std::cout << "Nom Joueur: " << main.name << std::endl;
        std::cout << "Role: " << main.role << std::endl;
        std::cout << "Charactere: " << main.character << std::endl;
    };
    return 0;
}
