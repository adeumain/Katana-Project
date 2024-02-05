#include <iostream>
#include "Joueur.h"
#include <conio.h>
#include <unistd.h>

using namespace std;


int main() {
    cartes();
    srand(static_cast<unsigned>(time(nullptr)));

    int nombreJoueurs;
    cout << R"(

                            /|
                          /'||
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

    cout << "Bienvenu dans le jeu KATANA" << endl;
    cout << "Choisissez un nombre de joueurs de 3 a 7 ! : " ; cin >> nombreJoueurs; cout << endl;

    while (nombreJoueurs < 3 || nombreJoueurs > 7){
            cout << "Choisissez un nombre de joueurs de 3 a 7 ! : " ; cin >> nombreJoueurs; cout << endl;
            cout << "C'est l'heure de l'attribution des roles, ne regardez que votre role ! ";
    }

    Joueur test;
    test.mainjoueurs(nombreJoueurs);

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
    };
    return 0;

}
