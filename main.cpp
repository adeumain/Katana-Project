#include <iostream>
#include "Joueur.h"
#include "UserInterface.h"

using namespace std;
int nombreJoueurs;

int main() {
    cartes();
    srand(static_cast<unsigned>(time(nullptr)));

    UserInterface affichageASCII;
    affichageASCII.affichageASCII();

    UserInterface messageBienvenue;
    messageBienvenue.messageBienvenu();

    Joueur initjoueurs;
    initjoueurs.mainjoueurs(nombreJoueurs);

    UserInterface affichageRoles;
    affichageRoles.affichageRoles();

    Joueur distrib;
    distrib.distribcartes();

    return 0;

}