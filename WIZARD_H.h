#pragma once
#include "Player.h"

class Wizard : public Player {
private:
  int magicPower;  
  int basicPower; 
public:
  Wizard();
  void normalAttack() override;
  void specialAttack() override;
  int getMagicPower();
  int getBasicPower(); 
};
