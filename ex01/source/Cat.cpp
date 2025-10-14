#include "../include/Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat created" << std::endl;
	this->type = "Cat";
	brain = new Brain;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Cat created from copy" << std::endl;
	this->type = copy.type;
	brain = new Brain(*copy.brain);
}

Cat &Cat::operator=(const Cat &copy)
{
	std::cout << "Cat equal operator" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
		delete brain;
		brain = new Brain(*copy.brain);
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destroyed" << std::endl;
	delete brain;
}

void Cat::makeSound() const
{
	std::cout << "😺MIAU😺" << std::endl;
}
