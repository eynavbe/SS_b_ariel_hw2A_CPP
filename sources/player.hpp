#include <string>
#include <iostream>

using namespace std;
namespace ariel
{
#ifndef PLAYER_H
#define PLAYER_H
class Player {
  private:    
    string p1;
  public:
    Player();
    Player(string);
    int stacksize();
    int cardesTaken();
};
#endif

}

