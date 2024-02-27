#pragma once
#include "Enemy.h"
#include <vector>

class Orc : public Enemy {
private:
  int attackPower;
  std::vector<std::string> taunts;

public:
  Orc();
  void tauntPlayer() override;
  void normalAttack() override;
  int getAttackPower();
};
