#include "Zombie.hpp"

int main()
{
	Zombie* zombie1= newZombie("miguel");
	zombie1->announce();
	delete zombie1;

	randomChump("mamocas");

	return(0);
}
