#include "../include/AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "AAnimal created" << std::endl;
	this->type = "AAnimal";
}

AAnimal::AAnimal(const AAnimal &copy)
{
	std::cout << "AAnimal created from copy" << std::endl;
	this->type = copy.type;
}

AAnimal &AAnimal::operator=(const AAnimal &copy)
{
	std::cout << "AAnimal equal operator" << std::endl;
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destroyed" << std::endl;
}

std::string AAnimal::getType() const
{
	return this->type;
}

void AAnimal::makeSound() const
{
	std::cout << "*" <<this->type << "-like noises??*" << std::endl;
}
