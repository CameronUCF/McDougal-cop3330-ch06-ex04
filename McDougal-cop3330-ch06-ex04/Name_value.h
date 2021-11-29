#include "main.h"

class Name_value
{
public:
	Name_value(std::string _name, int _score)
	{
		name = _name;
		score = _score;
	};

	std::string name;
	int score;
};