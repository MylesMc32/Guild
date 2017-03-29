#pragma once
#include <string>
#include "Foe."
class Warrior : public Foe
{
private:
	std::string _name;
public:
	Warrior(std::string name);
	~Warrior();


	std::string Attack() { return _name + " shouts 'DO YOU LIKE MY SWORD SWORD SWORD MY DIAMOND SWORD!"; }
};

