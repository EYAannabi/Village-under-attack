#ifndef PLAYER_H
#define PLAYER_H
#include "Entity.h"
#include "../Resources.h"
//#include "ResourceGenerator.h"
#include "../buildings/ResourceGenerator.h"



class Player : public Entity {
private:
    Resources resources;

public:
    Player(Position pos);
    Resources& getResources();
    void collectResources(ResourceGenerator* generator);
};

#endif
