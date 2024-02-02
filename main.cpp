#include <iostream>
#include "Cartes.h"

using namespace std;
int t;

int main() {
    cartes();

    for (const Card& card : allCards) {
        cout << "Card Name: " << card.name << endl;
        cout << "Type: " << card.type << endl;
        cout << "Attack: " << card.attack << endl;
        cout << "Defense: " << card.portee << endl;
        cout << "---------------------" << endl;
    }
    return 0;
}
