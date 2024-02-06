#include "UserInterface.h"
#include "Joueur.h"
#include <iostream>
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif
#include <conio.h>
using namespace std;


void UserInterface::messageBienvenu(){
    cout << "Bienvenu dans le jeu KATANA" << endl;
    cout << "Choisissez un nombre de joueurs de 3 a 7 ! : " ; cin >> nombreJoueurs; cout << endl;
    while (nombreJoueurs < 3 || nombreJoueurs > 7) {
        cout << "Choisissez un nombre de joueurs de 3 a 7 ! : ";
        cin >> nombreJoueurs;
        cout << endl;
        cout << "C'est l'heure de l'attribution des roles, ne regardez que votre role ! ";
    }}

void UserInterface::affichageRoles() {
    for (const Joueur& main : Main) {
        getch();
        cout << "Le prochain role s'affiche dans 3 secondes !  ";
        sleep(3);
        system("cls");
        cout << "Nom Joueur: " << main.name << std::endl;
        cout << "Role: " << main.role << std::endl;
        cout << "Personnage: " << main.character << std::endl;
        cout << "Cliquez sur une touche pour afficher le prochain role !  ";
        sleep(3);
    }
}

void UserInterface::affichageASCII() {
    cout << R"(

                            /|
                          /'||
                         |  ||
                         |  ||
                         |  ||
                         |  ||
                         |  ||
                         |  ||
                         |  ||
                         |  ||
                         |  ||
                         |  ||
                         |  ||
                         |  ||
                         |  ||
                         |  ||
                         |  ||         __.--._
                         |  ||      /~~   __.-~\ _
                         |  ||  _.-~ / _---._ ~-\/~\
                         |  || // /  /~/  .-  \  /~-\
                         |  ||((( /(/_(.-(-~~~~~-)_/ |
                         |  || ) (( |_.----~~~~~-._\ /
                         |  ||    ) |              \_|
                         |  ||     (| =-_   _.-=-  |~)        ,
                         |  ||      | `~~ |   ~~'  |/~-._-'/'/_,
                         |  ||       \    |        /~-.__---~ , ,
                         |  ||       |   ~-''     || `\_~~~----~
                         |  ||_.ssSS$$\ -====-   / )\_  ~~--~
                 ___.----|~~~|%$$$$$$/ \_    _.-~ /' )$s._
        __---~-~~        |   |%%$$$$/ /  ~~~~   /'  /$$$$$$$s__
      /~       ~\    ============$$/ /        /'  /$$$$$$$$$$$SS-.
    /'      ./\\\\\\_( ~---._(_))$/ /       /'  /$$$$%$$$$$~      \
    (      //////////(~-(..___)/$/ /      /'  /$$%$$%$$$$'         \
     \    |||||||||||(~-(..___)$/ /  /  /'  /$$$%$$$%$$$            |
      `-__ \\\\\\\\\\\(-.(_____) /  / /'  /$$$$%$$$$$%$             |
          ~~""""""""""-\.(____) /   /'  /$$$$$%%$$$$$$\_            /
                        $|===|||  /'  /$$$$$$$%%%$$$$$( ~         ,'|
                    __  $|===|%\/'  /$$$$$$$$$$$%%%%$$|        ,''  |
                   ///\ $|===|/'  /$$$$$$%$$$$$$$%%%%$(            /'
                    \///\|===|  /$$$$$$$$$%%$$$$$$%%%%$\_-._       |
                     `\//|===| /$$$$$$$$$$$%%%$$$$$$-~~~    ~      /
                       `\|-~~(~~-`$$$$$$$$$%%%///////._       ._  |
                       (__--~(     ~\\\\\\\\\\\\\\\\\\\\        \ \
                       (__--~~(       \\\\\\\\\\\\\\\\\\|        \/
                        (__--~(       ||||||||||||||||||/       _/
                         (__.--._____//////////////////__..---~~
                         |   """"'''''           ___,,,,ss$$$%
                        ,%\__      __,,,\sssSS$$$$$$$$$$$$$$%%
                      ,%%%%$$$$$$$$$$\;;;;\$$$$$$$$$$$$$$$$%%%$.
                     ,%%%%%%$$$$$$$$$$%\;;;;\$$$$$$$$$$$$%%%$$$$
                   ,%%%%%%%%$$$$$$$$$%$$$\;;;;\$$$$$$$$$%%$$$$$$,
                  ,%%%%%%%%%$$$$$$$$%$$$$$$\;;;;\$$$$$$%%$$$$$$$$
                 ,%%%%%%%%%%%$$$$$$%$$$$$$$$$\;;;;\$$$%$$$$$$$$$$$
                 %%%%%%%%%%%%$$$$$$$$$$$$$$$$$$\;;;$$$$$$$$$$$$$$$
                   ""==%%%%%%%$$$$$TuaXiong$$$$$$$$$$$$$$$$$$$SV"
                               $$$$$$$$$$$$$$$$$$$$====""""
                                 """""""""~~~~


)" << endl;

}

