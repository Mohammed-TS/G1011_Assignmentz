#include "Undead.h"
#include <iostream>
#include <vector>

Undead::Undead() {
  setHealth(100);
  darkMagicPower = 99;

  taunts.push_back("You are no match for my power!");
  taunts.push_back("I will be the end to your feeble existence!");
  taunts.push_back("Feel the chill of the grave!");
}

void Undead::tauntPlayer() {
  int randomIndex = rand() % taunts.size();
  std::cout << "The Undead taunts: " << "'" << taunts[randomIndex] << "'" << std::endl;
}

void Undead::normalAttack() {
  std::cout << "The Undead attacks with dark magic and deals: " << darkMagicPower << " damage" << std::endl;
}

int Undead::getDarkMagicPower() {
  return darkMagicPower;
}
