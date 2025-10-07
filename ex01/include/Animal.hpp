#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# pragma once

#include <string>
#include <iostream>

class Animal
{
	public:
	Animal(void);
	Animal(const Animal &copy);
	Animal &operator=(const Animal &copy);

	virtual ~Animal(void);

	std::string	getType() const;
	virtual void makeSound() const;

	protected:
	std::string	type;
};

#endif