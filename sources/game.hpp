#include "player.hpp"
#include <iostream>
#ifndef GAME_H
#define GAME_H
namespace ariel
{
class Game {
  private:    
    Player p1;
    Player p2;
  public:
    Game();
    Game(Player,Player);
    void playTurn();
    void printLastTurn();
    void playAll();
    void printWiner();
    void printLog();
    void printStats();
};
#endif

}
   