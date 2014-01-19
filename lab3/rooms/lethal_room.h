#include "room.h"

class Lethal_room : Room
{
public:
	Lethal_room(arguments);
	~Lethal_room();

	std::map< string, Room > doors();

	/* data */
};