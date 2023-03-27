#include "player.hpp"
using namespace std;
using namespace ariel;

Player::Player() {}
Player::Player(string p1) {this->p1 = p1;}
int Player::cardesTaken() {return 26;}
int Player::stacksize() {return 26;}

