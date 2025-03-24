#ifndef FILENAME_HPP
#define FILENAME_HPP

#include <iostream>
#include <fstream>

struct Args
{
	std::string file;
	std::string s1;
	std::string s2;
	std::string readValue;
};

void	replaceValue();
extern Args arg;

#endif