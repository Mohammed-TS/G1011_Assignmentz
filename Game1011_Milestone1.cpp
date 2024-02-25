// TODO: Milestone 1 - Game 1011
// Student Name: Rumaisa Shoukat ID: 101524730
// Student Name: Thomas Watson ID: 101474606
// Student Name: Mohammed Thanaparambil Siraj ID: 101459931 



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

  std::string getName() const {return name;}
  void setName(int currentName) { name = currentName; }

  int getHealth() const { return health; }
  void setHealth(int currentHealth) { health = currentHealth; }
};

class Enemy : public GameObject
{
private:
  int health;
public:
  virtual void tauntPlayer() = 0;

  int getHealth() const { return health; }
  void setHealth(int currentHealth) { health = currentHealth; }
};

class Wizard : public Player
{
public:
  static const std::string SPECIAL_ATTACK_NAME;
  
  int magicPower;

  void specialAttack() override
  {
    std :: cout << "Fire" << SPECIAL_ATTACK_NAME << "for" << magicPower << "DAMAGE!" << std::endl; 
    // Implement magic missile attack using magicPower
  }
};

class Knight : public Player
{
public:
  static const std::string SPECIAL_ATTACK_NAME;


  int strength;

  void specialAttack() override
  {
    std:: cout << "Swing sword for " << SPECIAL_ATTACK_NAME << "BLOWS!" << strength << std:: endl; 
    // Implement sword slash attack using strength
  }
};

class Orc : public Enemy
{
public:
  static const std::string Red_Orc;
  /* Same thing goes here */

  std::vector<std::string> taunts; //= {"Noob!", "Something like this"}
  int attackPower;

  void tauntPlayer() override
  {
    // Choose a random taunt from the array and print it

    int randomIndex = rand() % taunts.size();
    std::cout << "The Orc taunts: " << taunts[randomIndex] << std::endl;

    /* This will print a random taunt */
  }

  void normalAttack() override
  {
    // Implement normal attack using attackPower 
      std::cout << " The Orc attacks and deals: " << attackPower << " damage" << std::endl;
  }
};

class Undead : public Enemy
{
public:
  static const std::string Litch;

  std::vector<std::string> taunts;
  int darkMagicPower;

  void tauntPlayer() override
  {
      int randomIndex = rand() % taunts.size();
      std::cout << "The Undead taunts: " << taunts[randomIndex] << std::endl;
  }

  void normalAttack() override
  {
      std::cout << " The Undead attacks with dark magic and deals: " << darkMagicPower << " damage" << std::endl;
  }
};