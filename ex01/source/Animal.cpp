#include "../include/Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal created" << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal created from copy" << std::endl;
	this->type = copy.type;
}

Animal &Animal::operator=(const Animal &copy)
{
	std::cout << "Animal equal operator" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destroyed" << std::endl;
}

std::string Animal::getType() const
{
	return this->type;
}

void Animal::makeSound() const
{
	std::cout << "*" <<this->type << "-like noises??*" << std::endl;
}
