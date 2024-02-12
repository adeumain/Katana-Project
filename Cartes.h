#pragma once
#include <iostream>
#include <vector>

enum CardType { Armes, Permanantes, Action };

#ifndef CARTES_H_INCLUDED
#define CARTES_H_INCLUDED

class Cardorig
{
    private:
        CardType type;
        std::string name;
        int attack;
        int portee;
        int NbCartes;
    
    public:
        Cardorig(CardType cardType, const std::string& nomcarte, int Portee, int Degats, int NbCartes)
            : type(cardType), name(nomcarte), portee(Portee), attack(Degats),  NbCartes(NbCartes) {}

        CardType getType() const { return type; }
        std::string getName() const { return name; }
        int getAttack() const { return attack; }
        int getPortee() const { return portee; }
        int getNbCartes() const { return NbCartes; }
};

class Cardtot
{
    private:
        CardType type;
        std::string name;
        int attack;
        int portee;
    
    public:
        Cardtot(CardType cardType, const std::string& nomcarte, int Portee, int Degats)
            : type(cardType), name(nomcarte), portee(Portee), attack(Degats) {}

        CardType getType() const { return type; }
        std::string getName() const { return name; }
        int getAttack() const { return attack; }
        int getPortee() const { return portee; }
};

class Cardrolles
{
    public:
        std::vector<std::string> roles;
};

class Cardchar
{
    private:
        std::string name;
        int hp;

    public:
        Cardchar(const std::string& nomcarte, int vie)
            : name(nomcarte), hp(vie) {}

        std::string getName() const { return name; }
        int getHp() const { return hp; }
};

extern std::vector<Cardtot> totCards;

extern std::vector<Cardorig> allCards;

extern Cardrolles roles;

extern std::vector<Cardchar> charCards;

void cartes();

#endif
