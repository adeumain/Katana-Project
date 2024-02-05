#include "Joueur.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

std::vector<Joueur> Main;

Joueur::Joueur() : shuffledCharacters(characters.characters), shuffledRoles(roles.roles) {}

void Joueur::mainjoueurs(int numPlayers) {

    std::vector<Joueur> players;

    initializeRoles(numPlayers);
    // Input player names
    for (int i = 0; i < numPlayers; ++i) {
        std::string playerName;
        std::cout << "Enter the name of Player " << i + 1 << ": ";
        std::cin >> playerName;

        std::string role = Rndrole();
        std::string character = Rndcharacter();

        // Create a player and add to the vector
        players.push_back(Joueur(playerName, role, character, 0, Honeurpoints(role, numPlayers), {}));
    }

    // Distribute cards to each player's hand
    for (Joueur& player : players) {

    }

    Main.insert(Main.end(), players.begin(), players.end());
};

void Joueur::initializeRoles(int numPlayers) {
    // Clear the vector before populating
    shuffledRoles.clear();

    // Duplicate roles based on the number of players
    for (int i = 0; i < numPlayers; ++i) {
        shuffledRoles.insert(shuffledRoles.end(), roles.roles.begin(), roles.roles.end());
    }

    // Shuffle roles only once
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(shuffledRoles.begin(), shuffledRoles.end(), g);
}

std::string Joueur::Rndrole() {
    std::string tmp = shuffledRoles[0];
    shuffledRoles.erase(shuffledRoles.begin());
    return tmp;
};

std::string Joueur::Rndcharacter() {

    std::random_device rd;
    std::mt19937 g(rd());

    std::shuffle(shuffledCharacters.begin(), shuffledCharacters.end(), g);

    std::string tmp = shuffledCharacters[0];
    shuffledCharacters.erase(shuffledCharacters.begin());
    return tmp;
};

int Joueur::Honeurpoints(std::string role, int numPlayers) {
    if (numPlayers != 3) {
        if (role == "shogun") {
            return 5;
        }
        else if (numPlayers > 5) {
            return 3;
        }
        else if (numPlayers <= 5) {
            return 4;
        }
    } else {
        if (role == "shogun") {
            return 6;
        }
        else {
            return 3;
        }
    };
};