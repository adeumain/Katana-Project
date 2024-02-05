#include "Joueur.h"
#include <iostream>
#include <vector>

std::vector<Joueur> Main;

void Joueur::mainjoueurs(int numPlayers) {
    std::vector<Joueur> players;

    // Input player names
    for (int i = 0; i < numPlayers; ++i) {
        std::string playerName;
        std::cout << "Enter the name of Player " << i + 1 << ": ";
        std::cin >> playerName;

        // Assign role and character randomly
        std::string randomRole = roles.roles[rand() % roles.roles.size()];
        std::string randomCharacter = characters.characters[rand() % characters.characters.size()];

        // Create a player and add to the vector
        players.push_back(Joueur(playerName, randomRole, randomCharacter, {}));
    }

    // Distribute cards to each player's hand
    for (Joueur& player : players) {

    }

    Main.insert(Main.end(), players.begin(), players.end());
};