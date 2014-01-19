#include "game.cpp"
#include <iostream>

int main(int argc, char const *argv[])
{
	Game g;
	std::cout << g.invoke_command("move","east") << std::endl;
	return 0;
}