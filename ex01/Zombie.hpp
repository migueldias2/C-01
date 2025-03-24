#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string m_name;
public:
	void announce();
	void setName(const std::string& name);
};

Zombie* zombieHorde( int N, std::string name );

#endif