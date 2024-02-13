#include "FunctCartes.h"
#include <map>
#include <string>
#include <iostream>

using namespace std;

void FunctionCartes::CartesAction(string NomCarte, string NomJoueur) {
	if (NomCarte == "cri_de_guerre") {
		cri_de_guerre(NomJoueur);
	}
	else if (NomCarte == "daimyo") {
		daimyo(NomJoueur);
	}
	else if (NomCarte == "diversion") {
		diversion(NomJoueur);
	}
	else if (NomCarte == "meditation") {
		meditation(NomJoueur);
	}
	else if (NomCarte == "ceremonie_du_the") {
		ceremonie_du_the(NomJoueur);
	}
	else if (NomCarte == "jujitsu") {
		jujitsu(NomJoueur);
	}
	else {
		cout << "Cette carte n'est pas dans la liste" << endl;
	}
}

void FunctionCartes::CharactereActif(string NomCarte, string NomJoueur) {
	if (NomCarte == "Hanzo") {
		Hanzo(NomJoueur);
	}
	else if (NomCarte == "Ieyasu") {
		Ieyasu(NomJoueur);
	}
	else if (NomCarte == "Nobunaga") {
		Nobunaga(NomJoueur);
	}
	else {
		cout << "Cette carte n'est pas dans la liste" << endl;
	}
}


// Cartes Action
void cri_de_guerre(string nomJoueur) {
	for (Joueur& joueur : ListeJoueur) {
		int tmp;
		bool btmp = true;
		if (joueur.getIncapacite() == false && joueur.getName() != nomJoueur) {
			while (btmp) {
				cout << joueur.getName() << "Voulez vous défausser une carte parade pour ne pas perdre un point de vie?" << endl;
				cout << "[1] Oui" << endl << "[2] Non" << endl;
				cin >> tmp;
				switch (tmp) 
				{
				case 1:
					if (joueur.getCharacter() != "Hanzo") {
						for (auto it = joueur.getMain().begin(); it != joueur.getMain().end(); ++it) {
							if (it->getName() == "parade") {
								cout << "Carte Parades défausser, passage au prochain joueur" << endl;
								it = joueur.getMain().erase(it); // defausse
								btmp = false;
								break;
							}
						}
						if (btmp) {
							cout << "Vous n'avez pas de Parades, soustraction d'un point de vie" << endl;
							cout << joueur.getName() << " passe de " << joueur.getVie() << " points de vie";
							joueur.setVie(joueur.getVie() - 1);
							cout << " à " << joueur.getVie() << " points de vie" << endl;
							btmp = false;
						}
						break;
					}
					else {
						cout << "Le personage Hanzo" << joueur.getName() << "peut utiliser sa capacite" << endl;
						cout << "[1] Oui" << endl << "[2] Non" << endl;
						int i;
						cin >> i;
						switch (i)
						{
							case 1:
								Hanzo(joueur.getName());
								btmp = false;
								break;
							case 2:
								for (auto it = joueur.getMain().begin(); it != joueur.getMain().end(); ++it) {
									if (it->getName() == "parade") {
										cout << "Carte Parades défausser, passage au prochain joueur" << endl;
										it = joueur.getMain().erase(it); // defausse
										btmp = false;
										break;
									}
								}
								if (btmp) {
									cout << "Vous n'avez pas de Parades, soustraction d'un point de vie" << endl;
									cout << joueur.getName() << " passe de " << joueur.getVie() << " points de vie";
									joueur.setVie(joueur.getVie() - 1);
									cout << " à " << joueur.getVie() << " points de vie" << endl;
									btmp = false;
								}
								break;
						default:
							break;
						}
						Hanzo(joueur.getName());
						btmp = false;
					}
				case 2:
					cout << "Soustraction du point de vie" << endl;
					cout << joueur.getName() << "passe de " << joueur.getVie() << "points de vies";
					joueur.setVie(joueur.getVie() - 1);
					cout << "a" << joueur.getVie() << "points de vie" << endl;
					btmp = false;
				default:
					cout << "Option incorecte, revient au choix" << endl;
					continue;
				}
			}
		}
	}
}

void daimyo(string nomJoueur) {
	auto it = find(ListeJoueur.begin(), ListeJoueur.end(), nomJoueur);
	int tmp = it - ListeJoueur.begin();
	for (int j = 0; j < 2; j++) {
		ListeJoueur[tmp].getMain().push_back(totCards[0]);
		totCards.erase(totCards.begin()); // defausse
	}
}

void diversion(string nomJoueur) {
	int i = 0;
	cout << "Choisir un joueur cible" << endl;
	for (const Joueur& joueur : ListeJoueur) {
		if (joueur.getName() != nomJoueur) {
			cout << "[" << i << "] Joueur " << joueur.getName() << endl;
			i++;
		}
	}

	int tmp;
	cin >> tmp;
	if (tmp < 0 || tmp >= ListeJoueur.size() || ListeJoueur[tmp].getName() == nomJoueur) {
		cerr << "Choix invalide." << std::endl;
		return;
	}

	auto it = find(ListeJoueur.begin(), ListeJoueur.end(), nomJoueur);
	int jtmp = it - ListeJoueur.begin();

	cout << "Choisir un nombre de 0 a" << ListeJoueur[tmp].getMain().size()-1 << endl;
	cin >> i;

	ListeJoueur[jtmp].getMain().push_back(ListeJoueur[tmp].getMain()[i]);
	ListeJoueur[tmp].getMain().erase(ListeJoueur[tmp].getMain().begin() + i - 1); // defausse
}

void geisha(string nomJoueur) {
	int tmp;
	cout << "Chosir diffuser" << endl << "[1] 1 carte permanente en jeu" << endl << "[2] 1 carte au hasard dans la main d’un autre joueur" << endl;
	cin >> tmp;
	switch (tmp)
	{
	case 1:
		cout << "Voulez Vous diffuzer une carte permanante de quel joueur?" << endl;
		int i;
		for (const Joueur& joueur : ListeJoueur) {
			cout << "[" << i << "] Joueur " << joueur.getName() << endl;
			i++;
		}
		cin >> tmp;
		if (tmp < 0 || tmp >= ListeJoueur.size() || ListeJoueur[tmp].getPerm().size() == 0) {
			cerr << "Choix invalide." << std::endl;
			geisha(nomJoueur);
		}
		cout << "Chosir quelle carte eliminer: " << endl;
		for (int i = 0; i < ListeJoueur[tmp].getPerm().size() -1; i++) {
			cout << "[" << i << "] Carte " << ListeJoueur[tmp].getPerm()[i].getName() << endl;
		}
		cin >> i;
		cout << "Carte " << ListeJoueur[tmp].getPerm()[i].getName() << "Eliminee" << endl;
		ListeJoueur[tmp].getPerm().erase(ListeJoueur[tmp].getPerm().begin() + i -1); // defausse

	case 2:
		diversion(nomJoueur);
	default:
		cout << "Choix non existant" << endl;
		geisha(nomJoueur);
	}
}

void meditation(string nomJoueur) {
	cout << "Vous recevez toutes vos vies" << endl;
	auto it = find(ListeJoueur.begin(), ListeJoueur.end(), nomJoueur);
	int tmp = it - ListeJoueur.begin();
	auto cit = find(charCards.begin(), charCards.end(), ListeJoueur[tmp].getCharacter());
	int ctmp = cit - charCards.begin();
	ListeJoueur[tmp].setVie(charCards[ctmp].getHp());
	int i = 0;

	cout << "Choisir un joueur cible" << endl;
	for (const Joueur& joueur : ListeJoueur) {
		if (joueur.getName() != nomJoueur) {
			cout << "[" << i << "] Joueur " << joueur.getName() << endl;
			i++;
		}
	}
	int jtmp;
	cin >> jtmp;
	if (jtmp < 0 || jtmp >= ListeJoueur.size() || ListeJoueur[jtmp].getName() == nomJoueur) {
		cerr << "Choix invalide." << std::endl;
		return;
	}
	ListeJoueur[jtmp].getMain().push_back(totCards[0]);
	totCards.erase(totCards.begin()); // defausse
}

void ceremonie_du_the(string nomJoueur) {
	for (Joueur& joueur : ListeJoueur) {
		if (joueur.getName() != nomJoueur) {
			joueur.getMain().push_back(totCards[0]);
			totCards.erase(totCards.begin());
			cout << joueur.getName() << "A pioche une carte" << endl;
		}
		else {
			for (int i = 0; i < 3; i++) {
				joueur.getMain().push_back(totCards[0]);
				totCards.erase(totCards.begin());
			}
			cout << joueur.getName() << "A pioche trois carte" << endl;
		}
	}
}

void jujitsu(string nomJoueur) {
	for (Joueur& joueur : ListeJoueur) {
		int tmp;
		bool btmp = true;
		if (joueur.getIncapacite() == false && joueur.getName() != nomJoueur) {
			while (btmp) {
				cout << joueur.getName() << "Voulez vous défausser une carte arme pour ne pas perdre un point de vie?" << endl;
				cout << "[1] Oui" << endl << "[2] Non" << endl;
				cin >> tmp;
				switch (tmp)
				{
				case 1:
					for (auto it = joueur.getMain().begin(); it != joueur.getMain().end(); ++it) {
						if (it->getType() == Armes) {
							cout << "Carte Armes défausser, passage au prochain joueur" << endl;
							it = joueur.getMain().erase(it); // defausse
							btmp = false;
							break;
						}
					}
					if (btmp) {
						cout << "Vous n'avez pas de Armes, soustraction d'un point de vie" << endl;
						cout << joueur.getName() << " passe de " << joueur.getVie() << " points de vie";
						joueur.setVie(joueur.getVie() - 1);
						cout << " à " << joueur.getVie() << " points de vie" << endl;
						btmp = false;
					}
					break;
				case 2:
					cout << "Soustraction du point de vie" << endl;
					cout << joueur.getName() << "passe de " << joueur.getVie() << "points de vies";
					joueur.setVie(joueur.getVie() - 1);
					cout << "a" << joueur.getVie() << "points de vie" << endl;
					btmp = false;
				default:
					cout << "Option incorecte, revient au choix" << endl;
					continue;
				}
			}
		}
	}
}



// Cartes Charactere Actifs
void Hanzo(std::string NomJoueur) {
	auto jit = find(ListeJoueur.begin(), ListeJoueur.end(), NomJoueur);
	int jtmp = jit - ListeJoueur.begin();
	bool btmp = true;

	for (auto it = ListeJoueur[jtmp].getMain().begin(); it != ListeJoueur[jtmp].getMain().end(); ++it) {
		if (it->getType() == Armes) {
			cout << "Carte Armes défausser, passage au prochain joueur" << endl;
			it = ListeJoueur[jtmp].getMain().erase(it); // defausse
			btmp = false;
			break;
		}
	}
	if (btmp) {
		cout << "Vous n'avez pas de Armes, soustraction d'un point de vie" << endl;
		cout << ListeJoueur[jtmp].getName() << " passe de " << ListeJoueur[jtmp].getVie() << " points de vie";
		ListeJoueur[jtmp].setVie(ListeJoueur[jtmp].getVie() - 1);
		cout << " à " << ListeJoueur[jtmp].getVie() << " points de vie" << endl;
	}
}

void Ieyasu(std::string NomJoueur) {
	auto jit = find(ListeJoueur.begin(), ListeJoueur.end(), NomJoueur);
	int jtmp = jit - ListeJoueur.begin();

	ListeJoueur[jtmp].getMain().push_back(totCards.defausse[0]); // defausse
	totCards.erase(totCards.begin()); // defausse
	cout << ListeJoueur[jtmp].getName() << "A pioche une carte de la defausse" << endl;
}

void Nobunaga(std::string NomJoueur) {
	auto jit = find(ListeJoueur.begin(), ListeJoueur.end(), NomJoueur);
	int jtmp = jit - ListeJoueur.begin();

	cout << "En utilisant la capacite de Nobunaga:" << endl;
	cout << ListeJoueur[jtmp].getName() << " passe de " << ListeJoueur[jtmp].getVie() << " points de vie";
	ListeJoueur[jtmp].setVie(ListeJoueur[jtmp].getVie() - 1);
	cout << " à " << ListeJoueur[jtmp].getVie() << " points de vie" << endl;
	cout << "En plus il pioche une carte" << endl;
	ListeJoueur[jtmp].getMain().push_back(totCards[0]);
	totCards.erase(totCards.begin());
}