#include "../include/WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat created" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat created from copy" << std::endl;
	this->type = copy.type;
}

WrongCat WrongCat::operator=(const WrongCat &copy)
{
	std::cout << "WrongCat equal operator" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destroyed" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "👽️GRAAAUUUU👽️" << std::endl;
}
