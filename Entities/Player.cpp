#include "Player.h"
#include "../buildings/ResourceGenerator.h"
  // Fixed path

Player::Player(Position pos)
    : Entity(pos, "👦"), resources(400, 400) {} // Emoji 👦

Resources& Player::getResources() {
    return resources;
}

void Player::collectResources(ResourceGenerator* generator) {
    generator->collect(resources);
}
