/* This world is amazing. Love this world.
broooooooooooooooooo world
caralho */ 
#include "Filename.hpp"

void	replaceValue()
{
	
	size_t pos = 0;
	while((pos = arg.readValue.find(arg.s1, pos)) != std::string::npos)
	{
		arg.readValue.erase(pos, arg.s1.length());
		arg.readValue.insert(pos, arg.s2);
		pos += arg.s2.length();
	}
}