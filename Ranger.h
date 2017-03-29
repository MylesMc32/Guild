#pragma once
#include <string>
#include "Foe.h"
class Ranger :public Foe
{
private:
	std::string _name;
public:
	Ranger(std::string name);
	~Ranger();


	std::string Attack() { return _name + " shoots arrows at his enemies!  PEW PEW PEW"; }
};

