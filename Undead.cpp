#include "Undead.h"
#include <iostream>

Undead::Undead() {
  setHealth(100);
  darkMagicPower = 99;
}

void Undead::tauntPlayer() {
  int randomIndex = rand() % taunts.size();
  std::cout << "The Undead taunts: " << taunts[randomIndex] << std::endl;
}

void Undead::normalAttack() {
  std::cout << "The Undead attacks with dark magic and deals: " << darkMagicPower << " damage" << std::endl;
}

int Undead::getDarkMagicPower() {
  return darkMagicPower;
}
