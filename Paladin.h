#pragma once
#include <string>
#include "Foe.h"
class Paladin : public Foe
{
private:
	std::string _name;
public:
	Paladin(std::string name);
	~Paladin();


	std::string Attack() { return _name + " swings a giant maul at his foes!"; }
};

