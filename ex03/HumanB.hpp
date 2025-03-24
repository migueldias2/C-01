
#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string m_name;
	const Weapon* m_weaponB;
public:
	HumanB(const std::string& name);
	~HumanB();
	void attack() const;
	void setWeapon(const Weapon& weapon);
};

#endif