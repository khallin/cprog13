class Creature
{
	int life,
		strength,
		stamina;

	std::Vector<Object> objects;
	Environment* current_place;


public:
	Creature(arguments);
	~Creature();

	void change_life(short);
	
	void talk();
	std::string to_string();

};