#pragma once
#include "Player.h"

class Wizard : public Player {
public:
  int magicPower;

  void normalAttack() override;
  void specialAttack() override;
};
