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
		std::vector<std::string> main;

	public:
		Joueur() {}

		Joueur(std::string names, std::string roles, std::string charact, std::vector<std::string> cardes)
			: name(names), role(roles), character(charact), main(cardes) {}

		void mainjoueurs(int numPlayers);
};


extern std::vector<Joueur> Main;

#endif