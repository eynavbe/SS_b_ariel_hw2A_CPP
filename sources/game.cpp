#include "game.hpp"
#include "player.hpp"
using namespace std;
using namespace ariel;

void Game::playTurn() {}
void Game::printLastTurn() {cout << "printLastTurn" << endl; }
void Game::playAll() {}
void Game::printWiner() {cout << "printWiner" << endl; }
void Game::printLog() {cout << "printLog" << endl; }
void Game::printStats() {cout << "printStats" << endl; }
Game::Game() {}
Game::Game(Player p1, Player p2) {
	this->p1 = p1;
    this->p2 = p2;}