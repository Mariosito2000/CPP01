#include <iostream>
#include <string>

int	main()
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Mem Address (string) = " << &string << "\n";
	std::cout << "Mem Address (stringPTR) = " << &stringPTR << "\n";
	std::cout << "Mem Address (stringREF) = " << &stringREF << "\n";
	std::cout << "\n";
	std::cout << "Value (string) = " << string << "\n";
	std::cout << "Value (stringPTR) = " << stringPTR << "\n";
	std::cout << "Value (stringREF) = " << stringREF << "\n";
}