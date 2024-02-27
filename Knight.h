#pragma once
#include "Player.h"

class Knight : public Player {
public:
  int strength;

  void normalAttack() override;
  void specialAttack() override;
};
