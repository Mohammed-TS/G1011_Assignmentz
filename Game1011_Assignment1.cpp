// TODO: Milestone 1 - Game 1011
// Student Name: Thomas Watson ID: 101474606
// Student Name: Rumaisa Shoukat ID: 101524730
// Student Name: Mohammed Thanaparambil Siraj ID: 101459931

#include <iostream>
#include <cstdlib>
#include <ctime>
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
  }
  else if (playerType == "Knight")
  {
    player = new Knight();
    player->setName(playerName);
    player->setHealth(defaultHealth);
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
  if (playerType == "Wizard"){
    std::cout << "Basic Attack: " << static_cast<Wizard *>(player)->getBasicPower() << "\n"; // Statically cast the player pointer to an Wizard* pointer. 
    std::cout << "Dragon Flame: " << static_cast<Wizard *>(player)->getMagicPower() << "\n"; 
  }
  else if (playerType == "Knight"){
    std::cout << "Basic Attack: " << static_cast<Knight *>(player)->getBasicPower() << "\n";
    std::cout << "Sword Slash: " << static_cast<Knight *>(player)->getStrength() << "\n";
  }


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
    Enemy *enemy = nullptr;
    // Random seed for better randomness
    srand(static_cast<unsigned>(time(0)));
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
      std::cout << "Dark Magic Power: " << static_cast<Undead *>(enemy)->getDarkMagicPower() << "\n"; // same here
    }

    std::cout << "Humanity and Demons have been at war for centuries…\n"  
    << "Countless lives have been lost on both ends\n" 
    << "With no end to the bloody conflict in sight, the Human King proposes a solution to problem\n" 
    << "Every four year a tournament the likes the world has never seen will take place to settle disputes\n" 
    << "The idea was so crazy that it worked, little by little the two groups of people get together for friendly competition instead of blood-socked battle\n" 
    << "The following is a recording of the championship battle taking place 10,000 years since the founding of the competition in the year 2554" << std::endl;
    std::cin.get();

    std::cout << "3!" << std::endl;
    std::cin.get();
    std::cout << "2!" << std::endl;
    std::cin.get();
    std::cout << "1!" << std::endl;
    std::cin.get();
    std::cout << "Battle... Commence!" << std::endl;
    std::cin.get();

    enemy->tauntPlayer(); //enemy turn 
    std::cin.get();

    std::cout << "Turn Change!" << std::endl;
    std::cin.get();
    
    player->normalAttack();//player turn
    std::cin.get(); 

    std::cout << "Round 2!" << std::endl; 
    std::cout << "Start!" << std::endl;
    std::cin.get();

    enemy->tauntPlayer(); //enemy turn
    std::cin.get();

    std::cout << "Turn Change!" << std::endl; 
    std::cin.get();


    player->specialAttack();//player turn
    std::cin.get();

    std::cout << "Round 3!" << std::endl; 
    std::cout << "Start!" << std::endl;
    std::cin.get();

    enemy->normalAttack(); //enemy turn
    std::cin.get();
    std::cout << "The Enemy surges with power!" << std::endl;
    std::cin.get();
    enemy->normalAttack();
    std::cin.get();

    std::cout << "Turn Change!" << std::endl;
    std::cin.get();


    player->specialAttack();//player turn
    std::cin.get();

    std::cout << "Round 4!" << std::endl; 
    std::cout << "Start!" << std::endl;
    std::cin.get();


    enemy->tauntPlayer(); //enemy turn
    std::cin.get();
    enemy->tauntPlayer(); // enemy turn 

    std::cout << "Turn change!" << std::endl;
    std::cin.get();

    player->specialAttack();
    std::cin.get();

    std::cout << "Announcer: The oppenent falls! " << playerName <<" Wins!" << std::endl;

    delete player; // Free memory allocated for player object
    delete enemy;  // Free memory allocated for enemy object
  }

  return 0;
}