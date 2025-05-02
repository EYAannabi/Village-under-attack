# 🏰 Village Under Attack

**Village Under Attack** est un jeu de stratégie en ligne de commande développé en C++. Incarnez un joueur qui construit des bâtiments, collecte des ressources et défend son village contre des ennemis qui l'attaquent.

## 🎮 Fonctionnalités

- Déplacement du joueur sur une carte 2D.
- Construction de bâtiments : Hôtel de Ville, Mine d'Or, Collecteur d'Élixir, Murs.
- Collecte de ressources (or et élixir).
- Apparition automatique d'ennemis (Raiders) qui attaquent les bâtiments.
- Fin de partie lorsque l'Hôtel de Ville est détruit.

## 🗂️ Structure du projet

```bash

Village-under-attack/
├── Board.cpp
├── Board.h
├── Position.cpp
├── Position.h
├── Resources.cpp
├── Resources.h
├── main.cpp
├── buildings/
│   ├── Barrack.cpp
│   ├── Barrack.h
│   ├── Building.cpp
│   ├── Building.h
│   ├── ElixirCollector.cpp
│   ├── ElixirCollector.h
│   ├── GoldMine.cpp
│   ├── GoldMine.h
│   ├── ResourceGenerator.cpp
│   ├── ResourceGenerator.h
│   ├── TownHall.cpp
│   ├── TownHall.h
│   ├── Wall.cpp
│   └── Wall.h
├── Entities/
│   ├── Entity.cpp
│   ├── Entity.h
│   ├── Npc.cpp
│   ├── Npc.h
│   ├── Player.cpp
│   ├── Player.h
│   └── Enemies/
│       ├── Raider.cpp
│       └── Raider.h

```

## ⚙️ Compilation

Assurez-vous d'avoir un compilateur C++17 installé.

```bash
g++ -std=c++17 main.cpp Board.cpp Position.cpp Resources.cpp buildings/*.cpp Entities/*.cpp Entities/Enemies/*.cpp -o build/test_game
```

## 🚀 Exécution

Après compilation, lancez le jeu avec :

```bash
./build/test_game
```

## 🎮 Commandes du jeu

- **Déplacement** : `w` (haut), `a` (gauche), `s` (bas), `d` (droite)
- **Construire** :
    - `g` : Construire une Mine d'Or (coût : 100 élixirs)
    - `e` : Construire un Collecteur d'Élixir (coût : 100 ors)
    - `v` : Construire un Mur (coût : 10 ors)
- **Collecter des ressources** : `c`
- **Quitter le jeu** : `q`[Stack Overflow+3IBM - United States+3Stack Overflow+3](https://www.ibm.com/docs/ru/ssw_aix_72/p_bostechref/printw.html?utm_source=chatgpt.com)[Oracle Docs](https://docs.oracle.com/cd/E19695-01/802-1930-03/802-1930-03.pdf?utm_source=chatgpt.com)

## Aperçu du jeu

![image.png](image.png)

![image.png](image%201.png)![image 1](https://github.com/user-attachments/assets/15fe89de-13a4-4291-a464-d35913119cf1)
![image](https://github.com/user-attachments/assets/3731e1f1-9189-4d66-a447-4f3a6603550d)
