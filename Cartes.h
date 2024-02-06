#pragma once
#include <iostream>
#include <vector>

enum CardType { Armes, Permanantes, Action };

#ifndef CARTES_H_INCLUDED
#define CARTES_H_INCLUDED

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

class Cardrolles
{
    public:
        std::vector<std::string> roles;
};

class Cardchar
{
    public:
        std::string name;
        int hp;

        Cardchar(const std::string& nomcarte, int vie)
            : name(nomcarte), hp(vie) {}
};

extern std::vector<Cardtot> totCards;

extern std::vector<Cardorig> allCards;

extern Cardrolles roles;

extern std::vector<Cardchar> charCards;

void cartes();

#endif
