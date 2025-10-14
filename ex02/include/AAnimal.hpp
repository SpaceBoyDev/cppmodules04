#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# pragma once

#include <string>
#include <iostream>

class AAnimal
{
	public:
	AAnimal(void);
	AAnimal(const AAnimal &copy);
	AAnimal &operator=(const AAnimal &copy);

	virtual ~AAnimal(void);

	std::string	getType() const;
	virtual void makeSound() const = 0;

	protected:
	std::string	type;
};

#endif