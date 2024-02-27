#include "Knight.h"
#include <iostream>

void Knight::normalAttack() {
  std::cout << "Knight performs a basic attack." << std::endl;
}

void Knight::specialAttack() {
  std::cout << "Knight uses Sword Slash of " << strength << " does damage" << std::endl;
}
