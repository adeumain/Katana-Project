#include "Cartes.h"
#include <iostream>
#include <vector>

std::vector<Card> allCards;

void cartes() {
	// Cartes Format cardType, nomcarte, Portee, Degats, NbCartes

	// Cartes Attaques
	Card nodachi(Armes, "nodachi", 3, 3, 1);
	allCards.push_back(nodachi);

	Card nagayari(Armes, "nagayari", 4, 2, 1);
	allCards.push_back(nagayari);

	Card tanegashima(Armes, "tanegashima", 5, 1, 1);
	allCards.push_back(tanegashima);

	Card daikyu(Armes, "daikyu", 5, 3, 1);
	allCards.push_back(daikyu);

	Card Katana(Armes, "Katana", 2, 3, 1);
	allCards.push_back(Katana);

	Card kanabo(Armes, "kanabo", 3, 2, 1);
	allCards.push_back(kanabo);

	Card wakizashi(Armes, "wakizashi", 1, 3, 1);
	allCards.push_back(wakizashi);

	Card naginata(Armes, "naginata", 4, 1, 2);
	allCards.push_back(naginata);

	Card bo(Armes, "bo", 2, 1, 5);
	allCards.push_back(bo);

	Card kusarigama(Armes, "kusarigama", 2, 2, 4);
	allCards.push_back(kusarigama);

	Card shuriken(Armes, "shuriken", 2, 1, 3);
	allCards.push_back(shuriken);

	Card bokken(Armes, "bokken", 1, 1, 6);
	allCards.push_back(bokken);

	Card kiseru(Armes, "kiseru", 1, 2, 5);
	allCards.push_back(kiseru);



	// Cartes Permanantes
	Card attaque_rapide(Permanantes, "attaque_rapide", 0, 0, 3);
	allCards.push_back(attaque_rapide);

	Card code_du_bushido(Permanantes, "code_du_bushido", 0, 0, 2);
	allCards.push_back(code_du_bushido);

	Card armure(Permanantes, "armure", 0, 0, 4);
	allCards.push_back(armure);

	Card concentration(Permanantes, "concentration", 0, 0, 6);
	allCards.push_back(concentration);



	// Cartes Action
	Card cri_de_guerre(Action, "cri_de_guerre", 0, 0, 4);
	allCards.push_back(cri_de_guerre);

	Card daimyo(Action, "daimyo", 0, 0, 4);
	allCards.push_back(daimyo);

	Card diversion(Action, "diversion", 0, 0, 4);
	allCards.push_back(diversion);

	Card geisha(Action, "geisha", 0, 0, 6);
	allCards.push_back(geisha);

	Card meditation(Action, "meditation", 0, 0, 3);
	allCards.push_back(meditation);

	Card parade(Action, "parade", 0, 0, 15);
	allCards.push_back(parade);

	Card ceremonie_du_the(Action, "ceremonie_du_the", 0, 0, 4);
	allCards.push_back(ceremonie_du_the);

	Card jujitsu(Action, "jujitsu", 0, 0, 3);
	allCards.push_back(jujitsu);


}