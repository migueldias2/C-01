
#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	std::string m_name;
	Weapon m_weaponA;
public:
	HumanA(const std::string& name, const Weapon& weapon);
	~HumanA();
	void attack() const;
};

#endif