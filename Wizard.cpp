#include "WIZARD_H.h"
#include <iostream>
#include <vector>

Wizard::Wizard(){
  setHealth(100);
  magicPower = 100; 
  normalPower = 85; 
}

void Wizard::normalAttack() {
  std::cout << "Wizard performs a basic attack." << normalPower << "does damage"<< std::endl;
}
void Wizard::specialAttack() {
  std::cout << "Wizard uses Dragon Flame to attack " << magicPower << " does damage" << std::endl;  
                                                                                                //and call it in int main according to gameplay//
}

int Wizard::getMagicPower(){
  return magicPower; 
}

int Wizard::getNormalPower(){
  return normalPower; 
}
