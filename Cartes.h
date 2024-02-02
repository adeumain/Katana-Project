#pragma once
#include <iostream>
#include <vector>

enum CardType { Armes, Permanantes, Action };

#ifndef DE_H_INCLUDED
#define DE_H_INCLUDED

class Card
{
    public:
        CardType type;
        std::string name;
        int attack;
        int portee;
        int NbCartes;
    
        Card(CardType cardType, const std::string& nomcarte, int Portee, int Degats, int NbCartes)
            : type(cardType), name(nomcarte), portee(Portee), attack(Degats),  NbCartes(NbCartes) {}
};

extern std::vector<Card> allCards;

void cartes();

#endif