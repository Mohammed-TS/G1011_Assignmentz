#include "Knight.h"
#include <iostream>
#include <vector> 

Knight::Knight(){
  setHealth(100);
  strength = 100; 
  basicPower = 85; 
}

void Knight::normalAttack() {
  std::cout << "Knight performs a basic attack dealing " << basicPower << " damage" << std::endl;
}

void Knight::specialAttack() {
  std::cout << "Knight uses Sword Slash dealing " << strength << " damage" << std::endl;
}

int Knight::getStrength(){
  return strength; 
}

int Knight::getBasicPower(){
  return basicPower;
}
