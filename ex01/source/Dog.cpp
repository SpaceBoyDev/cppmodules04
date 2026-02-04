#include "../include/Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog created" << std::endl;
	this->type = "Dog";
	brain = new Brain;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	std::cout << "Dog created from copy" << std::endl;
	this->type = copy.type;
	brain = new Brain(*copy.brain);
}

Dog Dog::operator=(const Dog &copy)
{
	std::cout << "Dog equal operator" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
		delete brain;
		brain = new Brain(*copy.brain);
	}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destroyed" << std::endl;
	delete brain;
}

void Dog::makeSound() const
{
	std::cout << "🐶GUAU🐶" << std::endl;
}
