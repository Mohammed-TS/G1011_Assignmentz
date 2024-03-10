#include "Player.h"

std::string Player::getName() const {
  return name;
}

void Player::setName(std::string currentName) {
  name = currentName;
}

int Player::getHealth() const {
  return health;
}

void Player::setHealth(int currentHealth) {
  health = currentHealth;
}
