// TODO: Milestone 1 - Game 1011
// Student Name: Thomas Watson ID: 101474606
// Student Name: Rumaisa Shoukat ID: 101524730
// Student Name: Mohammed Thanaparambil Siraj ID: 101459931

// TODO: Read the code and fill accordingly
// I have made .cpp and .h files for all the classes, so we don't need to make class definitions.
// check how the.h and .cpp works. Its the same thing just in 2 diff files, you can start adding
// variables to classes in .h & .cpp according to the game structure for player and enemy
// there are some parts where we need to add new variables to make the game look better.

#include <iostream>
#include <string>
#include "Player.cpp"
#include "Enemy.cpp"
#include "Wizard.cpp"
#include "Knight.cpp"
#include "Orc.cpp"
#include "Undead.cpp"

int main()
{
  std::cout << "Welcome to the Battle Arena!\n";

  std::string playerType;
  std::string playerName;
  std::cout << "What type of player do you want to play as? Wizard or Knight?\n";
  std::cin >> playerType;
  std::cout << "What is your character name?\n";
  std::cin >> playerName;

  // default health
  int defaultHealth = 100;

  Player *player = nullptr; // Pointer to base class Player

  if (playerType == "Wizard")
  {
    player = new Wizard();
    player->setName(playerName);
    player->setHealth(defaultHealth);
    // If you have specific attributes for Wizard, set them here
    static_cast<Wizard *>(player)->magicPower = 50; // Example magic power
  }
  else if (playerType == "Knight")
  {
    player = new Knight();
    player->setName(playerName);
    player->setHealth(defaultHealth);
    // If you have specific attributes for Knight, set them here
    static_cast<Knight *>(player)->strength = 75; // Example strength
  }
  else
  {
    std::cout << "Invalid player type selected. Exiting game." << std::endl;
    return 1; // Exit the program if an invalid type is entered
  }
  // Display Player Information
  std::cout << "\nPlayer Information Summary:\n";
  std::cout << "Player Type: " << playerType << "\n";
  std::cout << "Player Name: " << playerName << "\n";
  std::cout << "Default Health: " << defaultHealth << "\n";

  std::string ready;
  std::cout << "Are you ready to witness a battle? (yes/no)\n";
  std::cin >> ready;

  if (ready != "yes")
  {
    std::cout << "Exiting game." << std::endl;
    delete player;
    return 1;
  }

  if (ready == "yes")
  {
    // Generate a random enemy (Orc or Undead)
    Enemy *enemy;
    int randomEnemyType = rand() % 2; // Randomly choose between Orc and Undead
    if (randomEnemyType == 0)
    {
      enemy = new Orc();
    }
    else
    {
      enemy = new Undead();
    }

    // Display information about the enemy
    std::cout << "\nEnemy Information:\n";
    if (dynamic_cast<Orc *>(enemy))
    {
      std::cout << "Enemy Type: Orc\n";
      std::cout << "Health: " << enemy->getHealth() << "\n";
      std::cout << "Attack Power: " << dynamic_cast<Orc *>(enemy)->getAttackPower() << "\n"; // dynamically cast the enemy pointer to an Orc* pointer.
    }
    else if (dynamic_cast<Undead *>(enemy))
    {
      std::cout << "Enemy Type: Undead\n";
      std::cout << "Health: " << enemy->getHealth() << "\n";
      std::cout << "Dark Magic Power: " << dynamic_cast<Undead *>(enemy)->getDarkMagicPower() << "\n"; // same here
    }

    std::cout << "3!" << std::endl;
    std::cout << "2!" << std::endl;
    std::cout << "1!" << std::endl;
    std::cout << "Battle... Commence!" << std::endl;

    enemy->tauntPlayer(); //enemy turn 

    std::cout << "Turn Change!" << std::endl;
    
    //player turn 

    std::cout << "Round 2!" << std::endl; 
    std::cout << "Start!" << std::endl;

    enemy->tauntPlayer(); //enemy turn

    std::cout << "Turn change!" << std::endl; 

    //player turn

    std::cout << "Round 3!" << std::endl; 
    std::cout << "Start!" << std::endl;

    enemy->normalAttack(); //enemy turn
    std::cout << "The Enemy Surges With Power!" << std::endl;
    enemy->normalAttack();

    std::cout << "Turn change!" << std::endl;

    //player turn

    std::cout << "Round 4!" << std::endl; 
    std::cout << "Start!" << std::endl;

    // Battle logic - Implement attack sequences between player and enemy

    // try using while(true) so for normal attack and special attack if enemy taunts.

    // End of battle - Display outcome and any relevant information

    delete player; // Free memory allocated for player object
    delete enemy;  // Free memory allocated for enemy object
  }

  return 0;
}