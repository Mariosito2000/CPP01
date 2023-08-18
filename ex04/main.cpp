#include "lib.hpp"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Incorrect number of arguments\n";
		std::exit(1);
	}
	std::ifstream file;
	file.open(argv[1]);
	if (file.is_open())
	{
		std::string	line;
		std::fstream rep;
		rep.open((std::string)argv[1] + ".replace",
			std::ios::in | std::ios::out | std::ios::trunc);
		if (!rep.is_open())
		{
			std::cout << "Failed to open replace file\n";
			std::exit(1);
		}
		while (getline(file, line))
		{
			for (size_t i = 0; i < line.length(); i++)
			{
				if (!std::strncmp(&line[i], argv[2], ((std::string)argv[2]).length()))
				{
					rep.write(argv[3], ((std::string)argv[3]).length());
					i += ((std::string)argv[2]).length() - 1;
				}
				else
					rep.write(&line[i], 1);
			}
			if (!file.eof())
				rep.write("\n", 1);
		}
	}
	else
	{
		std::cout << "Failed to open file\n";
		std::exit(1);
	}
	return (0);
}