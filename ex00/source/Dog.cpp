#include "../include/Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog created" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Dog created from copy" << std::endl;
	this->type = copy.type;
}

Dog Dog::operator=(const Dog &copy)
{
	std::cout << "Dog equal operator" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "🐶GUAU🐶" << std::endl;
}
