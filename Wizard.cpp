#include "WIZARD_H.h"
#include <iostream>
#include <vector>

Wizard::Wizard(){
  setHealth(100);
  magicPower = 100; 
  basicPower = 85; 
}

void Wizard::normalAttack() {

  std::cout << "Wizard performs a basic attack dealing: " << basicPower << " damage"<< std::endl;

}
void Wizard::specialAttack() {
  std::cout << "Wizard uses Dragon Flame dealing: " << magicPower << " damage" << std::endl;                                                                                                
}

int Wizard::getMagicPower(){
  return magicPower; 
}

int Wizard::getBasicPower(){
  return basicPower; 
}
