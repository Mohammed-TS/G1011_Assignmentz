#pragma once
#include "Player.h"

class Knight : public Player {
private:
  int strength;
  int basicPower; 
public:
  Knight(); 
  void normalAttack() override;
  void specialAttack() override;
  int getStrength();
  int getBasicPower(); 
};
