#include "WIZARD_H.h"
#include <iostream>
#include <vector>

Wizard::Wizard(){
  setHealth(100);
  magicPower = 100; 
  basicPower = 85; 
}

void Wizard::normalAttack() {
  std::cout << "Wizard performs a  attack." << basicPower << "does damage"<< std::endl;
}
void Wizard::specialAttack() {
  std::cout << "Wizard uses Dragon Flame to attack " << magicPower << " does damage" << std::endl;  
                                                                                                //and call it in int main according to gameplay//
}

int Wizard::getMagicPower(){
  return magicPower; 
}

int Wizard::getBasicPower(){
  return basicPower; 
}
