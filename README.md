# Katana-Project
Project card game in C++ named Katana

**110 cartes :** 
	7 (1 shogun, 2 samouraïs, 3 ninjas, 1 ronin) 
	12 cartes de personnages 
	90 cartes de jeu : 
		  ◊ 32 cartes d’armes (coins rouges) 
		  ◊ 15 cartes permanentes (coins bleus) 
		  ◊ 43 cartes d’actions (coins jaunes) (Toutes les cartes portent un symbole en bas à droite. Il ne sera utilisé que dans les futures extensions.)  
	1 carte de résumé.

**Stats :** 
	 30 points d’honneur 
	 36 points de vie 

**3 équipes secrètes:**
	1 shogun avec 2 samouraïs max
	3 ninjas ensemble 
	1 rônin tout seul

**Jeu de 4 à 7:**
	4 joueurs : 1 shogun, 1 samouraï, 2 ninjas (enlevez 1 carte de ninja sans la regarder avant de distribuer les rôles). 
	5 joueurs : 1 shogun, 1 samouraï, 1 ronin, 2 ninjas. 
	6 joueurs : 1 shogun, 1 samouraï, 1 ronin, 3 ninjas. 
	7 joueurs : 1 shogun, 2 samouraïs, 1 ronin, 3 ninjas.

**But du jeu:**
	le + de point d'honneur,
	dernière équipe en vie

**Préparer la partie:**
	choisir nombre de joueur; joueur 1 regarde l'écran et clique, role au hasard apparait, et ainsi de suite...
		shogun est public
	donner une carte personnage à chaque joueur en même temps
		joueur 1 : John
		joueur 2; Doe
		joueur 3: .....
		.....
	**Attribution des points d'honneur:**
		shogun +5
		autre joueur +4 si nombre de joueur > 5 
			sinon +3
	**Distribution des cartes:**
		shogun +4 cartes
		joueur 2 & 3 +5 cartes
		joueur 4 & 5 +6 cartes
		joueur 6 & 7 +7 cartes
