// Enemy.h
#ifndef ENEMY_H
#define ENEMY_H

#include "../Npc.h"
#include "../../buildings/Building.h"

class Enemy : public Npc {
protected:
    int damage;
    Building* target;

public:
    Enemy(Position pos, std::string repr, int health, int damage);
    virtual ~Enemy() = default;  // <-- IMPORTANT

    void setTarget(Building* target);
    virtual void attack();             // virtual car utilisé par Raider
    virtual void moveTowardsTarget();  // virtual car utilisé par Raider
};

#endif

