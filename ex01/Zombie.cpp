#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ...\n";
}
void Zombie::setName(const std::string& name)
{
	m_name = name;
}