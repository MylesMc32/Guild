#pragma once
#include <string>

class Foe
{


private:
	std::string _name;

	
public:

	Foe(std::string name);
	~Foe();

		std::string GetName() const { return _name; }
		std::string virtual Attack() { return _name + " Leveled by a G-force!"; }
};

