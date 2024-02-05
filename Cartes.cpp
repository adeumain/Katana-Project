#include "Cartes.h"
#include <iostream>
#include <vector>

std::vector<Cardorig> allCards;
std::vector<Cardtot> totCards;
Cardrolles roles;
Cardchar characters;

void cartes() {
	// Cartes Format cardType, nomcarte, Portee, Degats, NbCartes

	// Cartes Attaques
	Cardorig nodachi(Armes, "nodachi", 3, 3, 1);
	allCards.push_back(nodachi);

	Cardorig nagayari(Armes, "nagayari", 4, 2, 1);
	allCards.push_back(nagayari);

	Cardorig tanegashima(Armes, "tanegashima", 5, 1, 1);
	allCards.push_back(tanegashima);

	Cardorig daikyu(Armes, "daikyu", 5, 3, 1);
	allCards.push_back(daikyu);

	Cardorig Katana(Armes, "Katana", 2, 3, 1);
	allCards.push_back(Katana);

	Cardorig kanabo(Armes, "kanabo", 3, 2, 1);
	allCards.push_back(kanabo);

	Cardorig wakizashi(Armes, "wakizashi", 1, 3, 1);
	allCards.push_back(wakizashi);

	Cardorig naginata(Armes, "naginata", 4, 1, 2);
	allCards.push_back(naginata);

	Cardorig bo(Armes, "bo", 2, 1, 5);
	allCards.push_back(bo);

	Cardorig kusarigama(Armes, "kusarigama", 2, 2, 4);
	allCards.push_back(kusarigama);

	Cardorig shuriken(Armes, "shuriken", 2, 1, 3);
	allCards.push_back(shuriken);

	Cardorig bokken(Armes, "bokken", 1, 1, 6);
	allCards.push_back(bokken);

	Cardorig kiseru(Armes, "kiseru", 1, 2, 5);
	allCards.push_back(kiseru);



	// Cartes Permanantes
	Cardorig attaque_rapide(Permanantes, "attaque_rapide", 0, 0, 3);
	allCards.push_back(attaque_rapide);

	Cardorig code_du_bushido(Permanantes, "code_du_bushido", 0, 0, 2);
	allCards.push_back(code_du_bushido);

	Cardorig armure(Permanantes, "armure", 0, 0, 4);
	allCards.push_back(armure);

	Cardorig concentration(Permanantes, "concentration", 0, 0, 6);
	allCards.push_back(concentration);



	// Cartes Action
	Cardorig cri_de_guerre(Action, "cri_de_guerre", 0, 0, 4);
	allCards.push_back(cri_de_guerre);

	Cardorig daimyo(Action, "daimyo", 0, 0, 4);
	allCards.push_back(daimyo);

	Cardorig diversion(Action, "diversion", 0, 0, 4);
	allCards.push_back(diversion);

	Cardorig geisha(Action, "geisha", 0, 0, 6);
	allCards.push_back(geisha);

	Cardorig meditation(Action, "meditation", 0, 0, 3);
	allCards.push_back(meditation);

	Cardorig parade(Action, "parade", 0, 0, 15);
	allCards.push_back(parade);

	Cardorig ceremonie_du_the(Action, "ceremonie_du_the", 0, 0, 4);
	allCards.push_back(ceremonie_du_the);

	Cardorig jujitsu(Action, "jujitsu", 0, 0, 3);
	allCards.push_back(jujitsu);


	for (const Cardorig& cardorig : allCards) {
		for (int i = cardorig.NbCartes; i > 0; --i) {
			Cardtot card(cardorig.type, cardorig.name, cardorig.portee, cardorig.attack);
			totCards.push_back(card);
		};
	};

	roles.roles = { "Role1", "Role2", "Role3" };

	characters.characters = { "Character1", "Character2", "Character3" };
}