#pragma once
#include "Enemy.h"
#include <vector>

class Undead : public Enemy {
private:
  int darkMagicPower;
  std::vector<std::string> taunts;

public:
  Undead();
  void tauntPlayer() override;
  void normalAttack() override;
  int getDarkMagicPower();
};
