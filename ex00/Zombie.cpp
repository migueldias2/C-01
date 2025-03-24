#include "Zombie.hpp"

Zombie::Zombie(const std::string& name): m_name(name){}

Zombie::~Zombie()
{
	std::cout << m_name << " destroyed\n";
}
void Zombie::announce()
{
	std::cout << m_name << ": BraiiiiiiinnnzzzZ...\n";
}