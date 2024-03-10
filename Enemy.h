#pragma once
#include "GameObject.h"
#include <string>
class Enemy : public GameObject {
private:
  int health;

public:
  virtual void tauntPlayer() = 0;

  int getHealth() const;
  void setHealth(int currentHealth);
};
