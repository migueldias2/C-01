#include "HumanB.hpp"

void HumanB::attack() const
{
	std::cout << m_name << " attacks with their " << m_weaponB->getType() << '\n';
}

void HumanB::setWeapon(const Weapon& weapon)
{
	m_weaponB = &weapon;
}

HumanB::HumanB(const std::string& name): m_name(name), m_weaponB(NULL) {}
HumanB::~HumanB(){}