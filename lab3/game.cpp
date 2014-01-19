#include "game.h"

using namespace std;

Game::Game()
{
	map< string, string(Game::*)(string) > _commands;
	Game::init_commandmap();

	// init player
	// init map
	// init actors
}; 

//Game(arguments)
Game::~Game(){};

void Game::init_commandmap()
{	
	_commands["move"] 	= &Game::move;
	_commands["speak"] 	= &Game::speak;
}

string Game::invoke_command(string command, string arg)
{
	auto action = _commands[command];
	return (this->*action)(arg); 
}

string Game::move(string direction){
	return "Moved towards "+direction;
}

string Game::speak(string phrase){
	return "Stop talking to yourself";
}
