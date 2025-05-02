// Enemy.cpp
#include "Enemy.h"

Enemy::Enemy(Position pos, std::string repr, int health, int damage)
    : Npc(pos, repr, health), damage(damage), target(nullptr) {}

void Enemy::setTarget(Building* t) {
    target = t;
}

void Enemy::attack() {
    if (target) {
        target->takeDamage(damage);
    }
}

void Enemy::moveTowardsTarget() {
    if (!target) return;

    Position tPos = target->getPosition();
    int dx = (tPos.x > position.x) ? 1 : (tPos.x < position.x) ? -1 : 0;
    int dy = (tPos.y > position.y) ? 1 : (tPos.y < position.y) ? -1 : 0;
    move(dx, dy);
}

