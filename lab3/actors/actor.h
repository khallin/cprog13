class Actor
{
	int life,
		strength,
		stamina;

	std::Vector<Object> objects;
	Environment* current_place;


public:
	Actor(arguments);
	~Actor();

	void change_life(short);
	
	void talk();
	std::string to_string();

};