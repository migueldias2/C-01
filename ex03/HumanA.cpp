#include "HumanA.hpp"

void HumanA::attack() const
{
	std::cout << m_name << " attacks with their " << m_weaponA.getType() << '\n';
}

HumanA::HumanA(const std::string& name, const Weapon& weapon): m_name(name), m_weaponA(weapon) {}

HumanA::~HumanA(){};