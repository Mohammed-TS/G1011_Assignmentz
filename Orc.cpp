#include "Orc.h"
#include <iostream>
#include <vector>

Orc::Orc() {
  setHealth(100);
  attackPower = 99;

  taunts.push_back("Puny Human!!");
  taunts.push_back("Orc smash weak human!");
  taunts.push_back("You run! Orc chase!");
}

void Orc::tauntPlayer() {
  int randomIndex = rand() % taunts.size();
  std::cout << "The Orc taunts: " << "'" << taunts[randomIndex] << "'"<< std::endl;
}

void Orc::normalAttack() {
  std::cout << "The Orc attacks and deals: " << attackPower << " damage!" << std::endl;
}

int Orc::getAttackPower() {
  return attackPower;
}
