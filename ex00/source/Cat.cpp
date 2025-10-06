#include "../include/Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat created" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	std::cout << "Cat created from copy" << std::endl;
	this->type = copy.type;
}

Cat Cat::operator=(const Cat &copy)
{
	std::cout << "Cat equal operator" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "😺MIAU😺" << std::endl;
}
