#include "Orc.h"
#include <iostream>

Orc::Orc() {
  setHealth(100);
  attackPower = 99;
}

void Orc::tauntPlayer() {
  int randomIndex = rand() % taunts.size();
  std::cout << "The Orc taunts: " << taunts[randomIndex] << std::endl;
}

void Orc::normalAttack() {
  std::cout << "The Orc attacks and deals: " << attackPower << " damage" << std::endl;
}

int Orc::getAttackPower() {
  return attackPower;
}
