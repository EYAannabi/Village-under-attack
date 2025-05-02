#ifndef RAIDER_H
#define RAIDER_H

#include "Enemy.h"

class Raider : public Enemy {
public:
    Raider(Position pos);  // <-- ce constructeur est requis
};

#endif

