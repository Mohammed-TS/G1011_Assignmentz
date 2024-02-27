#pragma once
#include "GameObject.h"
#include <string>

class Player : public GameObject {
private:
  std::string name;
  int health;

public:
  virtual void specialAttack() = 0;

  std::string getName() const;
  void setName(std::string currentName);

  int getHealth() const;
  void setHealth(int currentHealth);
};
