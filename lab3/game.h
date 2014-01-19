#include <map>
#include <string>

using namespace std;

class Game
{
	map<string, string(Game::*)(string) > _commands;
public:
	Game(); // Tar ett sparat spels data eller initierar ett nytt
	~Game();
	string invoke_command(string, string);
	void init_commandmap();
	string move(string);
	string speak(string);
};