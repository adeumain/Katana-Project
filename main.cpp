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

    Joueur test;
    test.mainjoueurs(nombreJoueurs);

    UserInterface affichageRoles;
    affichageRoles.affichageRoles();

    return 0;

}