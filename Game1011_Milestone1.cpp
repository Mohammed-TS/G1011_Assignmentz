// TODO: Milestone 1 - Game 1011

#include <iostream>
#include <string>
#include <vector>

class GameObject
{
public:
  virtual void normalAttack() = 0;
};

class Player : public GameObject
{
private:
  std::string name;
  int health;
public:
  virtual void specialAttack() = 0;

  // TODO: Getters and setters for name and health
};

class Enemy : public GameObject
{
private:
  int health;
public:
  virtual void tauntPlayer() = 0;

  // TODO: Getters and setters for name and health
};

class Wizard : public Player
{
public:
  static std::string SPECIAL_ATTACK_NAME;
  /*const std::string Wizard::SPECIAL_ATTACK_NAME = "Magic Missile";
  define this outside class as in class declaration
  wont work */

  int magicPower;

  void specialAttack() override
  {
    // Implement magic missile attack using magicPower
  }
};

class Knight : public Player
{
public:
  static const std::string SPECIAL_ATTACK_NAME;
  /*const std::string Wizard::SPECIAL_ATTACK_NAME = "Sword Slash";
  define this outside class as in class declaration
  wont work */

  int strength;

  void specialAttack() override
  {
    // Implement sword slash attack using strength
  }
};

class Orc : public Enemy
{
public:
  static const std::string SPECIES_NAME;
  /* Same thing goes here */

  std::vector<std::string> taunts; //= {"Noob!", "Something like this"}
  int attackPower;

  void tauntPlayer() override
  {
    // Choose a random taunt from the array and print it

    // int randomIndex = rand() % taunts.size();
    // std::cout << "Orc taunts: " << taunts[randomIndex] << std::endl;

    /* This will print a random taunt */
  }

  void normalAttack() override
  {
    // Implement normal attack using attackPower
  }
};

class Undead : public Enemy
{
public:
  static const std::string SPECIES_NAME;
  /* Same thing goes here */

  std::vector<std::string> taunts;
  int darkMagicPower;

  void tauntPlayer() override
  {
    // Choose a random taunt from the array and print it
  }

  void normalAttack() override
  {
    // Implement normal attack using darkMagicPower
  }
};