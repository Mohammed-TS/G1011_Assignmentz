#include "WIZARD_H.h"
#include <iostream>

void Wizard::normalAttack() {
  std::cout << "Wizard performs a basic attack." << std::endl;
}

  //call static special attack name in.h  , and assign it here  

void Wizard::specialAttack() {
  std::cout << "Wizard uses Magic Missile of  " << magicPower << " does damage" << std::endl;  //replace magic missile with special attack name//
                                                                                                //and call it in int main according to gameplay//
}
