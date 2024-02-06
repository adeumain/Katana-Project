#pragma once
#include <iostream>
#include <vector>
#include "Cartes.h"


#ifndef JOUEUR_H_INCLUDED
#define JOUEUR_H_INCLUDED

class Joueur
{
	public:
		std::string name;
		std::string role;
		std::string character;
		int vie;
		int honeur;
		std::vector<Cardtot> main;
		std::vector<std::string> shuffledCharacters;
		std::vector<std::string> shuffledRoles;

	public:

		Joueur();

		Joueur(std::string names, std::string roles, std::string charact, int vies, int honeurs, std::vector<Cardtot> cardes)
			: name(names), role(roles), character(charact), vie(vies), honeur(honeurs), main(cardes) {}

		void mainjoueurs(int nombreJoueurs);

		void initializeRoles(int nombreJoueurs);

		std::string Rndrole();

		std::tuple<std::string, int> Rndcharacter();

		int Honeurpoints(std::string role, int nombreJoueurs);

		void distribcartes();
};

extern std::vector<Joueur> Main;

#endif