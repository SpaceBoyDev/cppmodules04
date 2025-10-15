#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal &operator=(const WrongAnimal &copy);

		virtual ~WrongAnimal(void);

		std::string	getType() const;
		virtual void makeSound() const;

	protected:
		std::string	type;
};

#endif