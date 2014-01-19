#include "room.h"

class Riddle_room : Room()
{
	struct Riddle
	{
		std::string _riddle;
		std::map< string answer, bool is_correct > _options;
	};
	std::vector<Riddle> _riddles;

public:
	Riddle_room();
	~Riddle_room();

};