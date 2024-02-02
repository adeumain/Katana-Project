#pragma once
#include <iostream>
#include <vector>

enum CardType { Armes, Permanantes, Action };

#ifndef DE_H_INCLUDED
#define DE_H_INCLUDED

class Cardorig
{
    public:
        CardType type;
        std::string name;
        int attack;
        int portee;
        int NbCartes;
    
        Cardorig(CardType cardType, const std::string& nomcarte, int Portee, int Degats, int NbCartes)
            : type(cardType), name(nomcarte), portee(Portee), attack(Degats),  NbCartes(NbCartes) {}
};

class Cardtot
{
public:
    CardType type;
    std::string name;
    int attack;
    int portee;

    Cardtot(CardType cardType, const std::string& nomcarte, int Portee, int Degats)
        : type(cardType), name(nomcarte), portee(Portee), attack(Degats) {}
};

extern std::vector<Cardtot> totCards;

extern std::vector<Cardorig> allCards;

void cartes();

#endif
