#pragma once
#include <string>
#include "Foe.h"
class Mage : public Foe
{
private:
	std::string _name;
public:
	Mage(std::string name);
	~Mage();

	
	std::string Attack() { return _name + " casts magic missle at the darkness!"; }	
};

