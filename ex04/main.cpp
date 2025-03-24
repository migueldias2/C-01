#include "Filename.hpp"

Args arg;

int	getReadValue()
{
	std::ifstream filename (arg.file.c_str());
	if (!filename)
	{
		std::cerr << "Error reading file\n";
		return (-1);
	}
	std::string line;
	while(std::getline(filename, line))
	{
		arg.readValue += line + '\n';
	}
	if (!arg.readValue.empty())
		arg.readValue.erase(arg.readValue.length() - 1, 1); //apagar ultimo /n
	filename.close();
	return (1);
}

int	copyToNew()
{
	std::ofstream newFile ((arg.file + ".replace").c_str());
	if (!newFile)
	{
		std::cerr << "Error opening file\n";
		return (-1);
	}
	newFile << arg.readValue;
	newFile.close();
	return (1);
}

int	main(int argc, char* argv[])
{
	if (argc != 4)
	{
		std::cout << "Invalid argument number\n";
		return (1);
	}
	arg.file = argv[1];
	arg.s1 = argv[2];
	arg.s2 = argv[3];

	if (getReadValue() == -1)
		return(1);
	replaceValue();
	if (copyToNew() == -1)
		return (1);

}

