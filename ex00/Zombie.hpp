#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string m_name;
public:
	Zombie(const std::string& name = "empty zombie");
	~Zombie();
	void announce();
};
Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif